#include <iostream>
#include <string>
 
using namespace std;

class Box {
   public:
      // fora statica je to, da se navezuje na vse objekte oz. na class sam.
	  // Torej v katerem koli classu boš to spreminju, se bo POVSOD spremenil
      static int objectCount;
      
      // Constructor definition
	  // = 2.0 pomen, da je to default value, če uporabnik ne vnese vseh parametrov
      Box(double l = 2.0, double breadth = 2.0, double h = 2.0)
	  {
         cout <<"Constructor called." << endl;
         length = l;
		 // To je isto kot zgoraj, ampak v tem primeru lahko 
		 // uporabiš isto ime parametra kot je tudi ime atributa tega classa
         this->breadth = breadth; 
         height = h;

         // Increase every time object is created
         objectCount++;
      }
      double Volume() {
		  cout << "Volume function called" << endl;
          return length * breadth * height;
      }
      static int getCount() {
         return objectCount;
      }
    // protected je zrad tega, da lahko tud v podedovanem classu dostopam do tega   
   protected:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};
class Kartonasta : public Box
{
	public:
		string name;
		static int number_of_karton_boxes;
	// Kle mamo samo 2 parametra, da vidmo kako se kličejo konstruktorji.
	// Fora je v tem, da se najprej kliče Box() z tistimi parametri, ki jih dobi
	// in ker v tem primeru (Kartonasta(2, "Karton")) ne dobi dost parametrov in zato nastavi tist kar zna
	Kartonasta(double h = 2.0, string name = "Karton") 
	{
         cout <<"Constructor Kartonasta called." << endl;
         length = 9;
         breadth = 8;
         height = h;
         this->name = name;
         number_of_karton_boxes++;
	  }	
	  void print_everything()
	  {
		cout << "start of print_everything-----------" << endl;
	  	cout << "length" << length << endl;
	  	cout << "breadth" << breadth << endl;
	  	cout << "height" << height << endl;
	  	cout << "name" << name << endl;
	  	cout << "number_of_karton_boxes" << number_of_karton_boxes << endl;
		cout << "end of print_everything-----------" << endl;
	  }
	  double Volume() {
		  cout << "Volume function called in Kartonasta" << endl;
		  // Na tak nacin klices parent funkcijo
          return Box::Volume();
      }
};
// Initialize static member of class Box
// To tud moreš kle inicializirat
int Box::objectCount = 0;
int Kartonasta::number_of_karton_boxes = 0;

int main(void) {
   // Print total number of objects before creating object.
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
   
   cout << "Do zdej mamo narjena 2 objketa tipa Box: " << Box::getCount() << endl;

   
   Kartonasta skatla(7, "karon");
    cout << "Zdej je narjen tud objekt tipa Kartonasta" << Box1.getCount() << endl;
   // Print total number of objects after creating object.
   
   cout << skatla.Volume() << endl;
   skatla.print_everything();

   // To je ubistvu useen ker box kliče to funkcijo, ker v vsakem primeru dobiš enako 
   cout << "Final Stage Count: " << Box1.getCount() << endl;
   
   return 0;
}