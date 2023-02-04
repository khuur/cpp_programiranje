#include <iostream>
#include <string>

using namespace std;

int main() {


    string beseda = "VEVERICA";
    string user_beseda = "";

    for(int i = 0; i < beseda.length(); i++) {
        user_beseda = user_beseda + "_";
    }

    int stevilo_dovoljenih_poskusov = 7;
    string ze_uporabljene_crke = "";

    string crka;

    cout << "User beseda : " << user_beseda << endl;
    cout << "Stevilo poizkusov: " << stevilo_dovoljenih_poskusov << endl;

    while(stevilo_dovoljenih_poskusov > 0){

        cout << "Vnesi crko: ";
        cin >> crka;

        crka = toupper(crka[0]);

        if(beseda.find(crka) < beseda.length()) {
            cout << "Nasel si crko" << endl;

            // int index = beseda.find(crka);
            // user_beseda[index] = crka[0];

            for(int i = 0; i < beseda.length(); i++) {
                if(beseda[i] == crka[0]) {
                    user_beseda[i] = crka[0];
                }
            }

            if(user_beseda == beseda) {
                cout << "Bravo! Uganil si besedo!" << endl;
                break;
            }
        } else {
            stevilo_dovoljenih_poskusov--;
            ze_uporabljene_crke = ze_uporabljene_crke + crka + ", ";

            cout << "Napacno si ze uporabil: " << ze_uporabljene_crke << endl;
            cout << "Imas se " << stevilo_dovoljenih_poskusov << " poskusov. " << endl;
        }

        cout << user_beseda << endl;

    }

    if(user_beseda == beseda) {
        cout << "Bravo" << endl;
    } else {
        cout << "Besede ti zal ni uspelo najti." << endl;
    }


    return 0;
}
