#include<iostream>

using namespace std;

/**
5.	Nekdo je zaprosil, da napišemo programček za izračun hitrosti pri prostem padu.
    Formula je v=gt, pri čem je v hitrost, t čas in g gravitacija(9,81).
	Deklariraj in inicializiraj potrebne spremenljivke in napiši program.
*/

int main() {
	float g = 9.81;
    float t, v;
	cout << "vpisi cas: ";
    cin >> t;
    v = g * t;
    cout << "hitrost je : " << v << endl;
    return 0;
}
 
