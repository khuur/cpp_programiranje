#include <iostream>
#include <cmath>

using namespace std;

int main() {


    int a = 35;
    int b = 25;

    if (a == b) {
        cout << "a in b sta enaka 3333" << endl;
    } else if (a > b){
        cout << "a je vecji od b 1111" << endl;
    } else {
        cout << "a je manjsi od b 2222" << endl;
    }


    char spol = 'H';

    if(spol == 'M') {
        cout << "Pozdravljen moski" << endl;
    } else if (spol == 'F') {
        cout << "Pozdravljena zenska" << endl;
    } else if (spol == 'M') {
        cout << "Pozdravljena moski, ki te ni prej najdu" << endl;
    } else {
        cout << "Nisi ne moski, ne zenska, tko da pases pod 'drugo'" << endl;
    }




    return 0;
}
