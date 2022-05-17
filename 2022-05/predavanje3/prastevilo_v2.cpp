//Napiši program, ki za podano število pove, ali je praštevilo
// 24 / 6 == 4
// 24 % 6 == 0

// 24 / 5.0 == 4.8
// 24 % 5 == 4
#include <iostream>

using namespace std;

int main() {

    int stevilo = 24;
    bool ali_je_prastevilo = true;

    for(int delitelj = 2; delitelj < stevilo; delitelj++) {

        cout << delitelj << endl;

        if(stevilo % delitelj == 0) {
            cout << "stevilo " << stevilo << " je deljivo z " << delitelj << endl;
            cout << "Iz tega vemo, da je to stevilo prastevilo" << endl;

            ali_je_prastevilo = true;
            break;
        }
    }

    if(ali_je_prastevilo == true) {
        cout << stevilo << " je prastevilo" << endl;
    } else {
        cout << stevilo << " NI prastevilo" << endl;
    }



    return 0;
}
