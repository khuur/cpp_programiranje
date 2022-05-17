#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int stevilo = 19;

    while(stevilo != 1) {

        cout << stevilo << endl;

        if(stevilo % 2 == 0) {
            stevilo = stevilo / 2;
        } else {
            stevilo = stevilo * 3 + 1;
        }


    }


    cout << stevilo << endl;

    return 0;
}
