    #include <iostream>
    #include <cmath>

    using namespace std;

    int main() {

        int ocena = 2;

       switch(ocena) {

        case 1:
            cout << "Nezadostno" << endl;
            break;

        case 2:
            cout << "Zadostno" << endl;
            break;

        case 3:
            cout << "Dobro" << endl;
            break;

        default:
            cout << "Ocene ne poznam" << endl;
            break;

       }


    }
