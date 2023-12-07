#include <iostream>
#include <string>

using namespace std;

int main() {


    string ime = "GreGor";
/*
    string priimek = "Bleiweis";

    cout << "Moje ime je: " << ime << endl;
    cout << "Moj priimek je: " << priimek << endl;
    string polno_ime = ime + " " + priimek;
    cout << "Polno ime: " << polno_ime << endl;

    cout << "Dolzina imena: " << ime.length() << endl;

    cout << "Dolzina polno_ime: " << polno_ime.length() << endl;

    ime[0] = toupper(ime[0]);

    cout << "Zacetnica mojega imena je: " << ime[0] << endl;

    // cout << "Prosim vpisi svoje ime: ";
    // getline(cin, ime);


    cout << "Moje ime (pred zanko) je: " << ime << endl;


    for(int i = 0; i < ime.length(); i++) {

        cout << "i: " << i << endl;
        cout << "crka: " << ime[i] << endl;

        if(i == 0) {
            ime[i] = toupper(ime[i]);
        } else {
            ime[i] = tolower(ime[i]);
        }

    }

    ime[0] = toupper(ime[0]);

    cout << "Moje ime (po zanki) je: " << ime << endl;

    cout << "ime.find(K)" << endl;

*/
    ime = "GreGor";

    cout << "ime: " << ime << endl;

    // Najdi vse indexe G-jev
    for(int i = 0; i < ime.length(); i++) {

        if(ime[i] == 'G') {
            cout << "index: " << i << endl;
        }
    }

    string datum = "2023-02-07";

    string leto = datum.substr(0, 4);
    string mesec = datum.substr(5, 2);
    string dan = datum.substr(8, 2);

    cout << "leto: " << leto << endl;
    cout << "mesec: " << mesec << endl;
    cout << "dan: " << dan << endl;

    if(dan[0] == '0'){
        dan = dan.substr(1,1);
    }

    if(mesec[0] == '0') {
        mesec = mesec.substr(1,1);
    }

    cout << dan << ". " << mesec << ". " << leto << endl;


    return 0;
}
