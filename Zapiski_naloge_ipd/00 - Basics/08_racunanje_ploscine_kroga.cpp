/**
8.	Napi�ite program, ki bo izra�unal povr�ino kroga.
    Program naj (1) vpra�a po radiju kroga, ki naj ga uporabnik vnese s pomo�jo tipkovnice,
    (2) zracuna povr�ino kroga po formuli povr�ina = pi * radij * radij in
    (3) izpi�e rezultat.


    *bonus: Uporabnik ima mo�nost povedat na kok decimalk mu zaokro�imo
    **bonus: PI importa� iz knji�nice vs ti napi�e� 3.14159

*/
#include <iostream>
#include <cmath>
#include <iomanip>

// definiramo svoj pi
#define PI 3.14159

using namespace std;


int main() {

    // deklariramo spremenljivke
    float povrsina, radij;
    int decimalke;

    // vnesemo radij kroga
    cout << "Vnesi radij kroga: ";
    cin >> radij;

    // vnesemo �tevilo decimalk
    cout << "Vnesi stevilo decimalk: ";
    cin >> decimalke;

    // izracunamo povr�ino z na�im Pi
    povrsina = radij * radij * PI;
    // izracunamo povr�ino s Pi iz knji�nice cmath
    povrsina = radij * radij * M_PI;

    cout << "Povrsina kroga je: " << povrsina << endl;
    // izpi�emo povr�ino z dolocenimi decimalkami
    cout << "Povrsina kroga je: " << setprecision(decimalke) << fixed << povrsina << endl;

    return 0;
}
