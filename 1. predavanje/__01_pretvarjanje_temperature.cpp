#include <iostream>
#include <cmath>

using namespace std;

int main() {
		
	
	float f, c;
	
	cout << "Vpisi temperaturo v fahrenheitih: " << endl;
	cin >> f;
	
	
	// tukaj pretvorimo iz fahrenheitih v celzije
	c = ((f - 32) * (5/9.0));
	cout << "Temperatura v celzijah je: " << round(c) <<  endl;
	
	cout << "----------------------" << endl;
	
	cout << "Vpisi temperaturo v celzijah: " << endl;
	cin >> c;
	
	// tukej pretvorimo iz celzij v fahtrenheite
	f = (c * 1.8) + 32;
	
	cout << "Temperatura v fahrenheitih je: " << round(f) <<  endl;

	// TODO Pretvorba še v Kelvine
		
	return 0;
}
