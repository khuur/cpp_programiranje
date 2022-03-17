#include<iostream>

using namespace std;

/**
7.	Napiši program, ki izračuna mesečni strošek goriva v EUR za dani avtomobil.
	Avto porabi 6.2 l na relacijskih vožnjah in 8.8 l na 100 km v mestu.
	Voznik prevozi 15000 km letno, od tega je 70% mestnih voženj, 30% pa relacij.
	Program naj upošteva, da znaša trenutna cena goriva 1.568 EUR za liter goriva (konstanta).
*/

int main() {

    float relacijska = 6.2;
    float mesto = 8.8;
    float prevozeni_kilometri = 15000;
    float mestnih_vozenj = prevozeni_kilometri * 0.7;
    float relacijskih_vozenj = prevozeni_kilometri * 0.3;
    float gorivo = 1.568;

    cout << (relacijska * relacijskih_vozenj + mesto * mestnih_vozenj) * gorivo << endl;
    return 0;
}