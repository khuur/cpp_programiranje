#include <iostream>
#include <cmath>

using namespace std;

int main() {


    float temperatura_v_celzijah;
    float temperatura_v_kelvinih;

    cout << "Vpisi temperaturo v celzijah: ";
    cin >> temperatura_v_celzijah;


    temperatura_v_kelvinih = temperatura_v_celzijah + 273;

    float temperatura_v_fahren = (temperatura_v_celzijah * (9/5.0)) + 32;

    cout << "Temperatura v celzijah je: " << temperatura_v_celzijah << endl;
    cout << "Temperatura v kelvinih je: " << temperatura_v_kelvinih << endl;
    cout << "Temperatura v fahrenheith je: " << temperatura_v_fahren << endl;

	return 0;
}
