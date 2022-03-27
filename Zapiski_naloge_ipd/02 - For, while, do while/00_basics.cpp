#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	
	
	cout << "Abrakadabra" << endl;
	cout << "Abrakadabra" << endl;
	cout << "Abrakadabra" << endl;
	cout << "Abrakadabra" << endl;
	cout << "Abrakadabra" << endl;
	cout << "Abrakadabra" << endl;
	cout << "Abrakadabra" << endl;
	cout << "Abrakadabra" << endl;
	cout << "Abrakadabra" << endl;
	
	
	
	
	
	
	
	
	// for loop to 10
	for(int i = 0; i < 10; i++){
		cout << i << endl;
	}

	// while loop to 10
	int i = 0;
	while(i < 10) {
		cout << i << endl;
		i++;
	}
	
	// do while loop to 10
	int i = 0;
	do {
		cout << i << endl;
		i++;
	}
	while(i < 10)



	// break, continue;
	// while(true) {} 09
	
	
	for(int i = 10; i > 0; i--) {
		cout << i << endl;
		if(i == 5){
			break;
		}
	}


	return 1;
}