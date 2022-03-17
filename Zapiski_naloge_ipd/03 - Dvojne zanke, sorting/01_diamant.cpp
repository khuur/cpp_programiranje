#include<iostream>

using namespace std;
int main() {

    int n, j, i, presledek;
    n = 4;
    presledek = n - 1;
	
	// zgornja polovica
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= presledek; j++) {
			// najprej presledki
            cout << " ";

        }
        presledek--;

        for (j = 1; j <= 2 * i - 1; j++) {
			// in se zvezdice
            cout << "*";
        }
        cout << "\n";
    }
    
    // spodnja polovica
    presledek = 1;
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= presledek; j++) {
			// najprej presledki
            cout << " ";
        }
        presledek++;

        for (j = 1; j <= 2 * (n - i) - 1; j++) {
			// in se zvezdice
            cout << "*";
        }
        cout << "\n";
    }
    return 0;

}