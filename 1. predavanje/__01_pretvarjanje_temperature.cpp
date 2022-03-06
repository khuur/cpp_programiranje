#include <iostream>
#include <cmath>

using namespace std;

int main() {
		
	// deklariramo spremenljivke
	float fahrenheit, celzije, kelvini;
	
	// vnesemo fahrenheite
	cout << "Vpisi temperaturo v fahrenheitih: ";
	cin >> fahrenheit;
	
	
	// tukaj pretvorimo iz fahrenheitih v celzije
	// pomembno je računati s float številom 9.0 (lahko je tudi drugo)
	celzije = ((fahrenheit - 32) * (5/9.0));
	// pretvorimo iz celzij v kelvine
	kelvini = celzije + 273.15;

	cout << "Temperatura v celzijah je: " << round(celzije) << endl;
	cout << "Temperatura v kelvinih je: " << round(kelvini) << endl;
	
	cout << "----------------------" << endl;
	
	// vnesemo celzije
	cout << "Vpisi temperaturo v celzijah: ";
	cin >> celzije;
	
	// tukej pretvorimo iz celzij v fahrenheite
	fahrenheit = (celzije * 1.8) + 32;
	// pretvorimo iz celzij v kelvine
	kelvini = celzije + 273.15;

	cout << "Temperatura v fahrenheitih je: " << round(fahrenheit) << endl;
	cout << "Temperatura v kelvinih je: " << round(kelvini) << endl;

	// TODO Pretvorba še v Kelvine
		
	return 0;
}
