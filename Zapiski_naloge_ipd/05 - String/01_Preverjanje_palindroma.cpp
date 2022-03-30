#include <iostream>

#include <string>

using namespace std;
/**
    Napišite program, ki bo preveril ali je besedilo palindrom.
    Palindrom je taka beseda / besedilo, ki se bere naprej in nazaj enako.
    Primer: ana, ajatutaja, pericarezeracirep, osemopitihhitipomeso
*/

int main() {

    string besedilo = "osemopitihhitipomeso";

    int n = besedilo.length();

    bool je_palindrom = true;

    // gremo skozi vse crke
    for (int i = 0; i < n; i++) {

        char prva_crka = besedilo[i];
        // n zato, da gremo od zadaj
        // -1 zato, ker [n] ne obstaja in je vedno ena manj
        // -i pa zato, da se premikamo po besedilu nazaj
        char zadnja_crka = besedilo[n - 1 - i];

        if (prva_crka != zadnja_crka) {
            je_palindrom = false;
            // cim najdemo eno nepravilnost, takoj zakljucimo z iskanjem
            break;
        }
    }

    if (je_palindrom == true) {
        cout << "Besedilo je palindrom :) " << endl;
    } else {
        cout << "Besedilo ni palindrom :( " << endl;
    }

    return 0;
}
