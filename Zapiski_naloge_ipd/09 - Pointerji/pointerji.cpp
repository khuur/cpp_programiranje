#include <iostream>
#include <string>

using namespace std;

/*
    Deklarirajte strukturo Oddelek, ki naj vsebuje ime oddelka
    ime razrednia ter tabelo največ 30ih dijakov in kazalec na dijaka.

    Dijak naj bo ugnezdena struktura, ki vsebuje ime in priimek.
    Funkcijo, ki bo brala podatke o največ 8ih oddelkih s pomočjo kazalca na oddelek.

    Podatki o dijakih pa naj se berejo s pomočjo kDijak.

*/

struct Dijak{
    string ime;
    string priimek;
};

struct Oddelek{
    string imeOddelka;
    string imeRazrednika;
    Dijak dijaki [30] ;
    Dijak* kdijak;
};
/**
    Kot vhodni parameter dobi kazalec na dijaka.
    In nato za vsakega dijaka vpise njegovo ime in priimek
*/
void vpisiDijaka(Dijak *dijak){

    cout << "Prosim, da vpisete ime dijaka: " << endl;
    getline(cin, dijak->ime);

    cout << "Prosim, da vpisete priimek dijaka: " << endl;
    getline(cin, dijak->priimek);

}
/**
    Kot vhodni parameter dobi kazalec na oddelek.
    In nato za vsakega dijaka poklice funkcijo vpisiDijaka()
*/
void vpisiOddelek(Oddelek *oddelek) {

    cout << "Prosim, da vpisete ime oddelka: " << endl;
    getline(cin, oddelek->imeOddelka);


    for(int i = 0; i < 30; i++) {
        // tukej nastavimo, da kazalec dijaka (kdijak) kaze na naslov od i-tega dijaka
        oddelek->kdijak = &oddelek->dijaki[i];
        // in nato poslje ta kazalec v funkcijo vpisiDijaka()
        vpisiDijaka(oddelek->kdijak);
    }
}

int main() {

    int stOddelkov = 8;

    Oddelek oddelki [stOddelkov]; // Nardimo tabelo osmih oddelkov
    Oddelek* kOddelek; // in pointer na oddelek

    // option 1:

    /*
    for(int i = 0; i < stOddelkov; i++) {
        kOddelek = &oddelki[i]; // naj kOddelek kaže na i-ti oddelek
        vpisiOddelek(kOddelek); // in naj ta oddelek poslje (dejansko samo njegovo lokacijo) v funkcijo
    }
    */

    // option 2:

    for(kOddelek = oddelki; kOddelek != &oddelki[stOddelkov-1]; kOddelek++) {
        vpisiOddelek(kOddelek); // in naj ta oddelek poslje (dejansko samo njegovo lokacijo) v funkcijo
    }


    // option 3:
    kOddelek = oddelki;

    while(kOddelek != &oddelki[stOddelkov-1]) {
        vpisiOddelek(kOddelek); // in naj ta oddelek poslje (dejansko samo njegovo lokacijo) v funkcijo
        kOddelek++;
    }

    /**
        Option1 je moja rešitev, ki deluje, ampak nima vseh elementov, ki jih Toth želi.
        Pustu sm ti jo, če ti bo na tak način lažje razumet.

        Option2 je taka rešitev, ki bo Tothu všeč.

        Option3 je pa taka rešitev, ki je všeč tako meni kot Tothu :D
        2 pa 3 sta isti, ampak mal lažje je za prebrat
    */

    cout << oddelki[0].dijaki[0].ime << endl;
    cout << oddelki[1].dijaki[0].ime << endl;
    cout << oddelki[2].dijaki[0].ime << endl;
    cout << oddelki[3].dijaki[0].ime << endl;

    return 0;
}
