#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	cout << "Vnesi kot: " << endl;
	float kot = 50; 
	
	kot = kot * 3.14159 / 180;
	// cin >> kot
	
	cout << "\n";
	cout << "\n";
	
	cout << "Vnesi hitrost: " << endl;
	float v = 10; 	
	//cin >> v;
	
	cout << "\n";
	cout << "Kot : " << kot << endl;
	cout << "Hitrost : " << v << endl;
	cout << "\n";
	float razdalja;
	razdalja = ((v*v) * sin(2 * kot)) / 10;
	
	
	cout << "Razdalja je : " << razdalja << endl;

    return 0;
}
