#include <iostream>
#include <cmath>

using namespace std;

int main() {
		
	
	float k1, k2, hipo;
	
	cout << "Vpisi kateto1: " << endl;
	cin >> k1;
	
	cout << "Vpisi kateto2: " << endl;
	cin >> k2;
	
	hipo = sqrt(k1*k1 + k2*k2);
	cout << "kateta 1: " << k1 << endl;
	cout << "kateta 2: " << k2 << endl;
	cout << "hipotenuza: " << hipo << endl;
	
	// naredi še tako, da dobiš hipotenuzo in eno izmed katet in izračunaš tadrugo
	
	
	return 0;
}
