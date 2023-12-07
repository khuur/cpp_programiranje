#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int starost = 0;
    bool ima_upokojensko_kartico = false;

    cout << "Ali imate upokojensko kartico: " << endl;
    cin >> ima_upokojensko_kartico;

    if(ima_upokojensko_kartico == false) {
         cout << "Vnesi starost: " << endl;
         cin >> starost;

    }

    //                 1                +       0  => 1
    if(ima_upokojensko_kartico == true || starost >= 18) {
        cout << "Lahko pijes pivo" << endl;
    } else {
        cout << "Zal ti ne smem prodati piva" << endl;
    }







    return 0;
}
