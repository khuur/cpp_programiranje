#include <iostream>

using namespace std;

int main () {

/*
    int a = 1;

    while(a < 10) {
        cout << "a : " << a << endl;
        a = a + 2;
    }


    int a = 0;

    while ( a < 10 ) {
        cout << "Pozdravljeni iz while-a" << endl;
        a = a + 1;
    }


    for(int i = 0; i < 100; i++) {
        cout << "Pozdravljeni iz fora" << endl;
    }


    for(int i = 1; i <= 10; i++) {

        cout << i << ": " <<(i * 7) << endl;

    }

*/

  /*
    for(int i = 0; i < 5; i++) {

        cout << "Prosim vnesi ceno izdelka: ";
        cin >> cena_izdelka;

        if(cena_izdelka == 0) {
            cout << "Konec nakupa. Placati morate: " << znesek_za_placilo << endl;
            break;
        } else {
            znesek_za_placilo = znesek_za_placilo + cena_izdelka;
            cout << "Placati moras: " << znesek_za_placilo << endl << endl;
        }
    }
    */



    float znesek_za_placilo = 0;
    float cena_izdelka;

    int stevilo_izdelkov = 0;

    while(stevilo_izdelkov < 5) {

        cout << "Prosim vnesi ceno izdelka: ";
        cin >> cena_izdelka;

        if(cena_izdelka == 0) {
            break;
        }

        stevilo_izdelkov++;
        znesek_za_placilo = znesek_za_placilo + cena_izdelka;

    }

    if(stevilo_izdelkov > 0) {
        cout << "Povprecen artikel stane: " << (znesek_za_placilo / stevilo_izdelkov) << endl;
    } else {
        cout << "Nic niste kupili" << endl;
    }


    return 0;
}
