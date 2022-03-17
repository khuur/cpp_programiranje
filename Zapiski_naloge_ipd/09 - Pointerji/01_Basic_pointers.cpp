#include <iostream>

using namespace std;

int main()
{
	int  x = 25;  // x-u nastavimo vrednost 25
	int  y = 10;  // y-u nastavimo vrednost 10
	int *p = &x;  // p-ju rečemo, da naj kaže na lokacijo x-a

	cout << "x se nahaja na: " << p << " lokaciji v pomnilniku." << endl;
	cout << "x ima vrednost: " << *p << endl << endl;

	p = &y; // na tak način povemo, da naj p kaže na y vrednost;

    cout << "y se nahaja na: " << p << " lokaciji v pomnilniku." << endl;
	cout << "y ima vrednost: " << *p << endl << endl;

	cout << "y-u smo povecali vrednost za 123" << endl;
	y = y + 123;

	cout << endl << "p se vedno kaze na y, tko da se je posledično spremenila vrednost p-ju" << endl;
    cout << "y se nahaja na: " << p << " lokaciji v pomnilniku." << endl;
	cout << "y ima vrednost: " << *p << endl << endl;

    cout << "\n\n";


    cout << "p ima vrednost: " << *p << endl << endl;
    cout << "a = *p + 100;" << endl;
    cout << "b = *p + 200;" << endl;

	int  a = *p + 100;
	int  b = *p + 200;

	cout << "a ima vrednost: " << a << endl;
    cout << "b ima vrednost: " << b << endl;

    cout << "*p-u smo povecali vrednost za 155" << endl;
    cout << "ker pa *p se vedno kaze na y, je ubistvu y spremenil vrednost." << endl;
	*p = *p + 155;

	cout << "y ima vrednost: " << y << endl << endl;



	return 0;
}
