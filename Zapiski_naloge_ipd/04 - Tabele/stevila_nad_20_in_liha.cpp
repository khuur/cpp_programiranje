#include <iostream>

using namespace std;

int main () {

    int taprava_stevila = 0;

    int stevilo;

    int tabela_stevil [6] = {23,41,21,7,50,60};

    for(int i = 0; i < 6; i++) {

        cout << "prosim vpisi stevilo: ";
        cin >> stevilo;


        if(stevilo % 2 == 1 && stevilo > 20) {

            tabela_stevil[taprava_stevila] = stevilo;

            taprava_stevila++;

        }

    }

    for(int i = 0; i < 6; i++) {
        cout << "tabela na indexu " << i << "ima vrednost " << tabela_stevil[i] << endl;

    }

    cout << "Tapravih stevil je bilo: " << taprava_stevila << endl;

    return 0;
}
