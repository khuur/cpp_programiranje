#include <cstring>

#include <string>

#include <cmath>

#include <ctime>

#include <cstdlib>

#include <iostream>

using namespace std;

int main() {

	
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
	// while(true) {}
	
	
	for(int i = 10; i > 0; i--) {
		cout << i << endl;
		if(i == 5){
			break;
		}
	}



	return 1;
}