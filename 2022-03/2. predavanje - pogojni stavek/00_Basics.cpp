#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	
	int a = 25;
	int b = 10;
	
	
	cout << "-------------" << endl;
    cout << "pogojni stavek (if statement)" << endl;
    cout << "-------------" << endl;
	
	
	if(a > b) {
		cout << "a je vecji od b" << endl;
	}

	if(a > b) {
		cout << "a je vecji od b" << endl;
	} else {
		cout << "a je manjsi od b" << endl;
	}
	
	if(a > b) {
		cout << "a je vecji od b" << endl;
	} else if(a == b) {
		cout  << "a in b sta enaka" << endl;	
	} else {
		cout << "a je manjsi od b" << endl;
	}

	
	cout << "-------------" << endl;
    cout << "pogojni operator" << endl;
    cout << "-------------" << endl;
	
	
	// operatorji = [ >, >=, <, <=, ==, != ]
	
	// Oklepaji in prednosti ipd
	// Logični operatorji = [ !, &&, ||]
	// TODO - Kris: primeri uporabe
	
	// 00_01_pozdrav_glede_na_uro.cpp
	
	//------------------------------------------------------------------------------
		
	cout << "-------------" << endl;
    cout << "pogojni operator" << endl;
    cout << "-------------" << endl;
	
	string x = a > b ? "a je vecji od b" : "a je manjsi od b";
	
    cout << "-------------" << endl;
	
	string x;
	if(a > b) {
		x = "a je vecji od b"
		cout << x << endl;
	} else {
		x = "a je manjsi od b"
		cout << x << endl;
	}
	
	//------------------------------------------------------------------------------
	
	

    return 0;
}
