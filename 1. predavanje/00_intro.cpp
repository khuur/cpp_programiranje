#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    cout << "Pozdravljen :) ";

    cout << 5 << endl;
    cout << 10 << endl;

    cout << "-------------" << endl;
    cout << "sestevanje in odstevanje " << endl;
    cout << "-------------" << endl;
    cout << 1 + 2 << endl;
    cout << 5 + 7 << endl;
    cout << 8 - 2 << endl;


    cout << "-------------" << endl;
    cout << "mnozenje " << endl;
    cout << "-------------" << endl;
    cout << 4 * 2 << endl;
    cout << 7 * 9 << endl;


    cout << "-------------" << endl;
    cout << "mnozenje in sestevanje " << endl;
    cout << "-------------" << endl;
    cout << 5+(3 * 10) << endl;
    cout << (5+3) * 10 << endl;


    cout << "-------------" << endl;
    cout << "deljenje " << endl;
    cout << "-------------" << endl;
    cout << 4 / 2 << endl;
    cout << 4 / 1.5 << endl;


    cout << "-------------" << endl;
    cout << "primerjanje " << endl;
    cout << "-------------" << endl;
    cout << (10 > 5) << endl;
	
	cout << "-------------" << endl;
    cout << "uporaba zunanjih knjiznic " << endl;
    cout << "-------------" << endl;
    cout << pow(2, 10) << endl;
	cout << stqr(9) << endl;


	cout << 2.4555554 << setprecision2 << endl;
    cout << "-------------" << endl;

    int ime_spremenljivke = 5;
    string moje_ime = "Kristjan";
    int starost = 24;

    float visina = 1.88;
	
	char crka = 'A';
	
	crka = crka + 1;
	
	cout << "crka : " << crka << endl;

    bool moski = true;

    cout << "Pozdravljen " << moje_ime << endl;

	starost = starost + 1;

	starost += 1;

	starost++;


	starost = starost - 1;

	float visina_cm;

	visina_cm = visina * 100;

	




    return 0;
}
