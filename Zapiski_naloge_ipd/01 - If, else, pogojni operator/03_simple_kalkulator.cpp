#include <iostream>

using namespace std;
int main() {
    
	
	int stevilo1 = 15;
	int stevilo2 = 7;
	
	cout << "Imamo stevili " << stevilo1 << " in " << stevilo2 << "." << endl;
	cout << "Kaj zelite narediti z njima?" << endl;
	cout << "Za sestevanje pritisnite '1'." << endl;
	cout << "Za odstevanje pritisnite '2'." << endl;	
	cout << "Za mnozenje pritisnite '3'." << endl;
	cout << "Za deljenje pritisnite '4'." << endl;
	
	int operacija;
	cin >> operacija;
	
	if(operacija == 1){
		cout << stevilo1 << " + " << stevilo2 << " = " << stevilo1 + stevilo2 << endl;
	}
	
	if(operacija == 2){
		cout << stevilo1 << " - " << stevilo2 << " = " << stevilo1 - stevilo2 << endl;
	}
	
	if(operacija == 3){
		cout << stevilo1 << " * " << stevilo2 << " = " << stevilo1 * stevilo2 << endl;
	}
	
	if(operacija == 4){
		cout << stevilo1 << " / " << stevilo2 << " = " << stevilo1 / stevilo2 << endl;
	}
	
	
    return 0;
}