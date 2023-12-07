#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float kot, hitrost, razdalja;

    float g = 9.81;

    cout << "Vnesi kot: " << endl;
    cin >> kot;

    cout << "Vnesi hitrost: " << endl;
    cin >> hitrost;

    // razdalja = hitrost

    float kot_v_rad = kot * (M_PI / 180);

    razdalja = (hitrost * hitrost * sin(2 * kot_v_rad)) / g;

    cout << "Razdalja : " << razdalja << endl;


    return 0;
}
