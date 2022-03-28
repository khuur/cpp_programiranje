#include <string>
#include <cmath>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Ulomek
{
	// Tele stvari lahko dostopaš samo znotraj tega classa
	// Aka ne moreš rečt object.burek, ampak moreš narest getterje pa setterje
	// Temu tudi služi getBurek(), ki ti samo vrne vrednost 
	private: 
		int burek;
		
	public:
		// Kar je kle je pa dostopno tudi skoz objekte
		// aka komot rečeš object.stevec pa ti ga sprinta vn.
		int stevec;
		int imenovalec;
		
	void getBurek()
	{
		cout<<"EN DOSTOPA DO MENE"<<endl;
		cout<<burek;
	}
	// Prva vrsta konstruktorjev, ki ne potrebuje nobenih vhodnih parametrov
	// Hkrati pa se dogaja tudi overloadanje, ker mamo 3 konstruktorje in vsi majo drugačne vhodne parametre
	Ulomek()
	{
		stevec = 0;
		imenovalec = 1;
		cout << "To je prazen ulomek" << endl;
	}
	Ulomek(int stevecc)
	{
		cout << "To je ubistvu celo stevilo" << endl;
		stevec = stevecc;
		imenovalec = 1;
	}
	Ulomek(int stevecc, int imenovalecc)
	{
		cout << "To je ubistvu taprav ulomk" << endl;
		stevec = stevecc;	
		imenovalec = imenovalecc;
		burek = 12334;
	}
	void value()
	{	
		cout << "value: " << (float)stevec / imenovalec << endl;
	}
	Ulomek operator + (Ulomek drugi)
	{
		int zgori = (stevec*drugi.imenovalec + drugi.stevec * imenovalec);
		int spodi = imenovalec * drugi.imenovalec;
		Ulomek nov_ulomek(zgori, spodi);
		return nov_ulomek;
	}
};

int main()
{
	// če želiš klicat konstruktor brez parametrov ne rabiš dat niti oklepajev.
	//Ulomek prvi;
	Ulomek drugi(3, 4);
	Ulomek tretji(7, 9);
	
	Ulomek sestevek = drugi + tretji;
	sestevek.value();
    return 0;
}

