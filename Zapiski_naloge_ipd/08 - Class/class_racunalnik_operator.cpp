#include <iostream>

using namespace std;

class Komponente {
    protected:
        int velikost_diska;
    string proizvajalec_diska;
    string vrsta_proc;
    int takt_proc;
    public:
        void vnos() {
            cin >> velikost_diska;
        };
    int cena() {
        return velikost_diska * 25;
    }; //cout<<"cena: "<<velikost_diska*5<<"€";};
    void print() {
        cout << "racunalnik s tako kapaciteto diska stane: " << cena() << endl << endl;
    };
};

class Racunalnik: Komponente {
    public: int price = 0;
    void razvrsti();
    void izpis(int i);
    bool operator > (Racunalnik drugi);
    Racunalnik() {
        cout << "vpisi kapaciteto: " << endl;
        vnos();
        price = cena();
        print();
    }
};

bool Racunalnik::operator > (Racunalnik drugi) {
    if (price > drugi.price) return 1;
    else return 0;
}

void Racunalnik::razvrsti() {

}

void Racunalnik::izpis(int i) {

    cout << i << ": " << price << endl;
}

int main() {
    Racunalnik kompi[5];
    int c = 0;
    for (int m = 0; m < 5; m++) {
        for (int i = 0; i < 4; i++) {
            c = kompi[i].operator > (kompi[i + 1]);
            if (c == 1) {
                for (int j = 0; j < 5; j++) {
                    c = kompi[j].operator > (kompi[i + 1]);
                    if (c == 1) {
                        swap(kompi[i + 1], kompi[j]);
                        c = 0;
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        kompi[i].izpis(i);
    }
    return 0;
}