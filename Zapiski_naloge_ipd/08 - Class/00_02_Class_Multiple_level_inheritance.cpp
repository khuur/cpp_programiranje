// C++ program demonstrating ambiguity in Multipath
// Inheritance
 
#include<iostream>
 
class ClassA {
  public:
    int a;
};
 
class ClassB : public ClassA {
  public:
    int b;
};
 
class ClassC : public ClassA {
  public:
    int c;
};
 
class ClassD : public ClassB, public ClassC {
  public:
    int d;
};
 
int main()
{
    ClassD obj;
 
    // obj.a = 10;                  // Statement 1, Error
    // obj.a = 100;                 // Statement 2, Error
 /*
	 Tukej mu moreš povedat KATER TOČNO a nej ti zdej spremeni, ker ma dostop do dveh različnih ajev.
	 Zakaj? Ker je ClassD sestavvljen iz ClassC in Class B. ž
	 Tako B kot C sta narejena iz A-ja, torej imata oba njegov public value 'a';
	 Potemtakem ima obj:
		2x (1x od Cja in 1x od Bja) vrednost 'a',
		1x vrednost 'b',
		1x vrednost 'c',
		1x vrednost 'd'.
		
*/
    obj.ClassB::a = 10;  // Statement 3
    obj.ClassC::a = 100; // Statement 4
 
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
 
    cout << " a from ClassB  : " << obj.ClassB::a;
    cout << "\n a from ClassC  : " << obj.ClassC::a;
 
    cout << "\n b : " << obj.b;
    cout << "\n c : " << obj.c;
    cout << "\n d : " << obj.d << '\n';
}