#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Napiši program, ki sešteje dve števili (a in b) in to izpiše na zaslon
    // Pri čemer sta a in b vnaprej definirani

    int a = 5;
    int b = 7;

    cout << (a+b) << endl;
    cout << (a*b) << endl;

    a = 10;

    cout << (a+b) << endl;
    cout << (a*b) << endl;

    a = a + 8;

    cout << (a+b) << endl;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << (a*b) << endl;

    return 0;
}
