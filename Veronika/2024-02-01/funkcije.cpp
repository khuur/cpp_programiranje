#include <iostream>
#include <cmath>

using namespace std;

double dobi_pi() {

    cout << "Evo me v funkciji" << endl;

    return 3.14;
}

double dobi_minimalno_postavko() {

    cout << "Evo me v funkciji dobi_minimalno_postavko" << endl;

    return 6;
}





int main() {

/*
    double pi = 3.14;

    double pi_iz_funkcije = dobi_pi();

    cout << "pi: " << pi << endl;
    cout << "pi_iz_funkcije: " << pi_iz_funkcije << endl;


    double min_postavka = dobi_minimalno_postavko();

    int stevilo_oddelanih_ur = int(8.7);

    cout << "stevilo_oddelanih_ur = " << stevilo_oddelanih_ur << endl;

    double zasluzek = min_postavka * stevilo_oddelanih_ur;

    cout << "Danes si zasluzila: " << zasluzek << endl;

    cout << abs(-2) << endl;
*/

    string stevilka = "12";

    int int_stevilka = stoi(stevilka);
    int_stevilka++;

    cout << "stevilka: " << stevilka << endl;
    cout << "int_stevilka: " << int_stevilka << endl;

    string nova_stevilka = to_string(651165);
    cout << "nova_stevilka: " << nova_stevilka << endl;

    nova_stevilka.append("abc");

    cout << "nova_stevilka: " << nova_stevilka << endl;


    return 0;
}
