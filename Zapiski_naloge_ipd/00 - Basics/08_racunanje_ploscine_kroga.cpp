/**
8.	Napišite program, ki bo izraèunal površino kroga.
    Program naj (1) vpraša po radiju kroga, ki naj ga uporabnik vnese s pomoèjo tipkovnice,
    (2) zracuna površino kroga po formuli površina = pi * radij * radij in
    (3) izpiše rezultat.


    *bonus: Uporabnik ima možnost povedat na kok decimalk mu zaokrožimo
    **bonus: PI importaš iz knjižnice vs ti napišeš 3.14159

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

    // vnesemo število decimalk
    cout << "Vnesi stevilo decimalk: ";
    cin >> decimalke;

    // izracunamo površino z našim Pi
    povrsina = radij * radij * PI;
    // izracunamo površino s Pi iz knjižnice cmath
    povrsina = radij * radij * M_PI;

    cout << "Povrsina kroga je: " << povrsina << endl;
    // izpišemo površino z dolocenimi decimalkami
    cout << "Povrsina kroga je: " << setprecision(decimalke) << fixed << povrsina << endl;

    return 0;
}
