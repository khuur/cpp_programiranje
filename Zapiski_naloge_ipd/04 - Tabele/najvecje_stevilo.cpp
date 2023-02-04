#include <iostream>

using namespace std;

int main () {

    int tabela_stevil [6] = {23,41,21,77, 55,60};

    int najvecje_stevilo = 0;

    for(int i = 0; i < 6; i++) {

        if(tabela_stevil[i] > najvecje_stevilo) {
            najvecje_stevilo = tabela_stevil[i];
        }

    }

    cout << "Najvecje stevilo: " << najvecje_stevilo << endl;



    return 0;
}
