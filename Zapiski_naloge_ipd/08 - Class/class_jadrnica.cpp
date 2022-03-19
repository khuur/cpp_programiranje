#include <iostream>

using namespace std;

class Jadrnica {
    protected:
        string ime_j;
    int dol, hit;
    public:
        void vnos() {
            cout << "vnesi jadrnico";
            cin >> dol >> hit;
            cout << endl;
        };
    Jadrnica() {
        vnos();
    }
};

class Motorni_coln {
    protected:
        string ime_c;
    int m, h;
    public:
        void vnos() {
            cout << "vnesi motor";
            cin >> m >> h;
            cout << endl;
        };
    Motorni_coln() {
        vnos();
    }
};

class Jadrnica_z_motorjem: Motorni_coln, Jadrnica {
    public: void izracun();
};

void Jadrnica_z_motorjem::izracun() {
    int razlika = hit - h;
    cout << "razlika v hitrosti: " << razlika;
}

int main() {
    Jadrnica_z_motorjem motorna;
    motorna.izracun();
    return 0;
}