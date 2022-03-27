#include<iostream>
#include<cmath>

using namespace std;
int main() {


	bool izgleda_sumljiv = true;

	if(izgleda_sumljiv == true) {
		
		int starost;
		cout << "Prosimo vpisite koliko let imate: " << endl;
		cin >> starost;
		
		if(starost >= 18){
			cout << "Lahko pijes pivo" << endl;
		} else {
			cout << "Ne smes piti piva, saj nimas niti 18 let."
		}
		
	} else {
		cout << "Nisi mi sumljiv, tko da lahko pijes pivo" << endl;
	}
   
   
   
   
    return 0;

}
