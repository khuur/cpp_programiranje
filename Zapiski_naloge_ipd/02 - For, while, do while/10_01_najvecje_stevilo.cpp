#include <iostream>
#include <string>

using namespace std;
/*
Uporabnik vnasa stevila. In nato mu program vrne najvecje stevilo.
Bonus: Naj to deluje tud z negativnimi stevili

Če uporabnik vnese 0, naj se program zakljuci
*/

int main() {


    float user_stevilka, najvecja_stevilka;
    bool prvic = true;

    while(true) {

        cout << "Vnesi stevilko: ";
        cin >> user_stevilka;

        if(user_stevilka == 0) {
            break;
        }

        if(prvic == true){
            prvic = false;
            najvecja_stevilka = user_stevilka;
            continue;
        }

        if(user_stevilka > najvecja_stevilka) {
            najvecja_stevilka = user_stevilka;
        } 
    }

    cout << "Najvecja stevilka je: " << najvecja_stevilka << endl;

    return 0;
}
