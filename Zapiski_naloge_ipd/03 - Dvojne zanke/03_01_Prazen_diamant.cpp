#include<iostream>

using namespace std;
int main() {

    int n = 5;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for(int j = 0; j < (i + 1) + i; j++) {
			// ce smo cist na zacektu al pa cist na koncu
            if(j == 0 || j == (i + 1) + i -1) {
				// izrisemo zvezdico
                cout << "*";
            } else {
				// drugace pa izrisemo presledek
                cout << " ";
            }

        }
        cout << endl;
    }

    for(int i = 1; i < n; i++) {

        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < (n - i) * 2 - 1; j++) {
			// ce smo cist na zacektu al pa cist na koncu
            if(j == 0 || j == (n - i) * 2 - 2){{
				// izrisemo zvezdico
                cout << "*";
            }
            else {
				// drugace pa izrisemo presledek
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
