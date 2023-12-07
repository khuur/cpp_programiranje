#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int ura = 2;

    // cout << "Vnesi koliko je ura: " << endl;
    // cin >> ura;

    /*
    if (ura <= 9) {
        cout << "Dobro jutro" << endl;
    } else {

        if (ura > 16) {
            cout << "Dober vecer" << endl;
        } else {
            cout << "Dober dan" << endl;
        }
    }
    */
    
    //     1     *     0  => 0
    if (ura <= 9 && ura >= 6) {
        cout << "Dobro jutro" << endl;
    } else if (ura <= 16) {
        cout << "Dober dan" << endl;
    } else if (ura <= 22) {
        cout << "Dober vecer" << endl;
    } else if (ura == 2) {
        cout << "Dbfsadfj vecer" << endl;
    }



    




    return 0;
}
