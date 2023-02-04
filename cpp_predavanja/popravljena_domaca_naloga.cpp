#include <iostream>
#include <math.h>
using namespace std;

int main() {

	// Spremenljivke pisi znotraj zavitih oklepajev :)
	

	//Avtomacko sestej vnaprej vneseni stevili
	float a = 5.3;
	float b = 5;
	//Uporabnik vnese stevili
	float vneseno_prvo_stevilo;
	float vneseno_drugo_stevilo;
	float rezultat;

    //Avtomacko sestej vnaprej vneseni stevili
    cout << "Sesteti rezultat je:" << endl;
    cout << a * b << endl;

    //Uporabnik vnese stevili
    cout << "Vnesi prvo stevilo:" << endl;
    cin >> vneseno_prvo_stevilo;
    cout << "Vnesi drugo stevilo:" << endl;
    cin >> vneseno_drugo_stevilo;
    rezultat = vneseno_prvo_stevilo * vneseno_drugo_stevilo;
    cout << "Vas sesteti rezultat je:" << endl;
    cout << rezultat << endl;

    return 0;
}
