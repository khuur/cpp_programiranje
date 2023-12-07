#include <iostream>

using namespace std;

int main (){


    float prva_stevilka, druga_stevilka;

    cout << "vnesite 1. stevilko: " << endl;
    cin >> prva_stevilka;
    cout << "\n";

    cout << "vnesite 2. stevilko" << endl;
    cin >> druga_stevilka;
    cout << "\n";

    char operacija;

    char d = 'D';

    cout << "za sestevanje uporabite +" << endl;
    cout << "za odstevanje uporabite -" << endl;
    cout << "za mnozenje uporabite *" << endl;
    cout << "za deljenje uporabite /" << endl;

    cout << "\n";
    cout << "katero stevilsko operacijo zelite: " << endl;
    cin >> operacija;

    // operacija = '1';

    if (operacija == '+') {
        cout << (prva_stevilka + druga_stevilka) << endl;
    } else if (operacija == '-') {
        cout << (prva_stevilka - druga_stevilka) << endl;
    } else if (operacija == '*') {
        cout << (prva_stevilka * druga_stevilka) << endl;
    } else if (operacija == '/') {
        cout << (prva_stevilka / druga_stevilka) << endl;
    } else {
        cout << "napacen vnos" << endl;
    }

    switch(operacija) {
        case '+':
            cout << (prva_stevilka + druga_stevilka) << endl;
            break;
        case '-':
            cout << (prva_stevilka - druga_stevilka) << endl;
            break;
        case '*':
            cout << (prva_stevilka * druga_stevilka) << endl;
            break;
        case '/':
            cout << (prva_stevilka / druga_stevilka) << endl;
            break;
        default:
            cout << "Napacen vnos" << endl;
            break;
    }


}
