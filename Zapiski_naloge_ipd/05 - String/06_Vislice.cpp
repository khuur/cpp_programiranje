#include <iostream>

using namespace std;
/**
	Napisi program, ki omogoca igranje vislic.
	Zaenkrat naj bo tako, da uporabnik vpise eno besedo in nato jo drug uporabnik ugiba.
	Ima 5 poizkusov, da ugotovi besedo. 
	
	Primer: 
	beseda = "veverica";
	uporabnik vnese: 'e'
	_e_e_____
	
	uporabnik vnese: 'k'
	Imas se 4 poizkusov.
	_e_e_____
	
	uporabnik vnese: 'a'
	_e_e____a
	
	6.1 Fino je, da se ob vsakem poizkusu izpise katere crke ze ima.
	6.2 Program naj uporabniku izpise tudi katere crke je ze poizkusil
	6.3 Na koncu naj program izpise ali je uporabniku uspelo ali ne.
		Ce mu ni, naj napise do kam mu je uspelo priti.
*/

int main() {

    string beseda = "veverica";
    int n = beseda.length();

    for (int i = 0; i < n; i++) {
    //    cout << beseda[i];
    }
    cout << endl;

    string user_beseda = "";

    for (int i = 0; i < n; i++) {
        user_beseda += "_";
    }

    cout << user_beseda << endl;
    char crka;
    int stevilo_poizkusov = 5;

    string user_poizkusi = "";

    while (beseda != user_beseda && stevilo_poizkusov > 0) {
        cout << "User, vnesi crko, ki mislis, da je notr: ";
        cin >> crka;

        bool najdu_vsaj_eno_crko = false;

        for (int i = 0; i < n; i++) {
            if (crka == beseda[i] && beseda[i] != user_beseda[i]) {
                user_beseda[i] = crka;
                cout << "Bravo, crka se nahaja na " << i << "-tem mestu" << endl;
                cout << user_beseda << endl;
                najdu_vsaj_eno_crko = true;
            }
        }

        if(najdu_vsaj_eno_crko == false){
            user_poizkusi += crka;
            stevilo_poizkusov--;
            cout << "ne, te crke zal ni notr" << endl;
            cout << "imas se " << stevilo_poizkusov << " poizkusov" << endl;
            cout << "do sedaj si poizkusil : " << user_poizkusi << endl;
        }
    }

    cout << endl;
    cout << endl;

    if(beseda == user_beseda) {
        cout << "Bravo! Uganil si besedo: " << user_beseda << endl;
    } else {
        cout << "Joj, skoda. Ni ti uspelo najti iskane besede. " << endl;
        cout << "Iskana beseda je bila: " << beseda << endl;
        cout << "Tebi je uspelo priti do: " << user_beseda << endl;
    }

    return 0;
}
