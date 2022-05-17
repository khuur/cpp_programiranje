#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char znakci;
    float stev1, stev2;

    cout << "Simpel kalkulator - osnove +,-,* in /" << endl;
    cout << "-------------------------------------" << endl;
    cout << endl;
    cout << "Izracunaj po zelji :" << endl;
    cout << "Vnesi: +,-,* ali / :" << endl;
    cin >> znakci;
    cout << "Vnesi prvo stevilko in drugo stevilko :" << endl;
    cin >> stev1 >> stev2;


    // Način 1
    if (znakci == '+') {
        cout << "Rezultat: " << stev1 << " + " << stev2 << " = " << stev1 + stev2 << endl;
    } else if (znakci == '-') {
        cout << "Rezultat: " << stev1 << " - " << stev2 << " = " << stev1 - stev2 << endl;
    } else if (znakci == '*') {
        cout << "Rezultat: " << stev1 << " * " << stev2 << " = " << stev1 * stev2 << endl;
    } else if (znakci == '/') {
        cout << "Rezultat: " << stev1 << " / " << stev2 << " = " << stev1 / stev2 << endl;
    } else {
        cout << "Opa operater ni vredu - poskusi z +, -, *, / " << endl;
    }

    // Način 2
    switch(znakci) {

    case '+' :
        cout << "Rezultat: " << stev1 << " + " << stev2 << " = " << stev1 + stev2 << endl;
        break;
    case '-' :
        cout << "Rezultat: " << stev1 << " - " << stev2 << " = " << stev1 - stev2 << endl;
        break;
    case '*' :
        cout << "Rezultat: " << stev1 << " * " << stev2 << " = " << stev1 * stev2 << endl;
        break;
    case '/' :
        cout << "Rezultat: " << stev1 << " / " << stev2 << " = " << stev1 / stev2 << endl;
        break;
    default:
        cout << "Opa operater ni vredu - poskusi z +, -, *, / " << endl;
        break;
    }




    return 0;
}
