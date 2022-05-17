#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int procenti = 35;
    int ocena = 0;

    //bool ravnateljev_sine = true;
    bool navaden_smrtnik = false;

    if (!navaden_smrtnik || (procenti >= 90 && procenti <= 100)) {
        ocena = 5;
    } else if (procenti >= 77 && procenti <= 89) {
        ocena = 4;
    } else if (procenti >= 63 && procenti <= 76) {
        ocena = 3;
    } else if (procenti >= 50 && procenti <= 62) {
        ocena = 2;
    } else {
        ocena = 1;
    }


	cout << ocena << endl;

    switch(ocena) {

        case 1: cout << "Dobil si negativno" << endl; break;
        case 2: cout << "Dobil si zadostno" << endl; break;
        case 3: cout << "Dobil si dobro" << endl; break;
        case 4: cout << "Dobil si prav dobro" << endl; break;
        case 5: cout << "Dobil si odlicno" << endl; break;
        default: cout << "Nevem kaj je to" << endl;

    }

    // če ne želimo, da se nek pogoj izvede potem napišemo pred pogoj 'false && '
    if(false && ocena > 3) {
        cout << "kr uredu" << endl;
    }


    return 0;
}
