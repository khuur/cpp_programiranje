#include <iostream>

using namespace std;

int main() {
	
	int stevilka;
	int stevilo_sodih = 0;
	
	while(true) {
		
		cout << "Prosim vnesite stevilko: ";
		cin >> stevilka;
		
		if(stevilka % 2 == 0){
			cout << "Vpisano stevilo je sodo" << endl;
			stevilo_sodih = stevilo_sodih + 1;
		} else {
			cout << "Vpisana stevilka ja liha" << endl;
		}
		
		// ce je uporabnik vpisal steviko 0, naj se program zakljuci
		if (stevilka == 0) {
			break;
		}		
	}
   
    return 0;
}