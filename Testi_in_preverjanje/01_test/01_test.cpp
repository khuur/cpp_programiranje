#include <iostream>
#include <ctime>

using namespace std;

/**
1.  a) Res je
    b) Res je
    c) ?
    d) Res je
    e)

2. d)

3. c)

4.

5. Kontrolka : int koliko_testov = 0;


*/

template <class Type>
class Matrica {
private:
    Type matrix [3][3];
protected:

public:
    Matrica() {
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                matrix[i][j] = rand() % 100 + 50;
            }
        }
    }

    Matrica(Matrica &matrica) {
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                matrix[i][j] = matrica.matrix[i][j];
            }
        }
    }

    void print_all() {
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
    }

    void operator + (Matrica druga) {
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                matrix[i][j] += druga.matrix[i][j];
            }
        }
    }

    void operator *= (int n) {
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                matrix[i][j] *= n;
            }
        }
    }

    void operator += (int n) {
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                matrix[i][j] += n;
            }
        }
    }

};

int main() {

    srand (time(NULL));

    Matrica <short> tab1;
    Matrica <int>   tab2;

    tab1.print_all();
    cout << endl;

    tab2.print_all();
    cout << endl;

    //tab1 + tab2;
    tab1.print_all();
    cout << endl;

    tab1 *= 3;
    tab1.print_all();
    cout << endl;

    tab1 += 3;
    tab1.print_all();
    cout << endl;




    Matrica* <float> pMatrix = tab1;
    
    delete pMatrix;

    return 0;
}
