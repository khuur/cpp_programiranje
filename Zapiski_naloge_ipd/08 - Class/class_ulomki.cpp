#include <iostream>

using namespace std;

class Ulomek {
    float stevec, imenovalec;
    public:
        void sestevek(Ulomek drugi);
    float odstej(Ulomek drugi);
    void zmnozi(Ulomek drugi) {
        cout << "zmnozek: " << ((stevec * drugi.stevec) / (imenovalec * drugi.imenovalec)) << endl;
    };
    void deli(Ulomek drugi) {
        cout << "delitev:" << ((stevec * drugi.imenovalec) / (imenovalec * drugi.stevec)) << endl;
    };
    Ulomek(int s, int i) //nisem našel pravega naèin, da bi bral v konstruktorju, vrednosti doloèam v main
    {
        imenovalec = i;
        stevec = s;
    }
};

void Ulomek::sestevek(Ulomek drugi) {
    float skupni = imenovalec, vsota = (stevec + drugi.stevec);
    float sestevek;
    if (imenovalec != drugi.imenovalec) {
        skupni = imenovalec * drugi.imenovalec;
        vsota = ((stevec * drugi.imenovalec) + (drugi.stevec * imenovalec));
    }

    sestevek = vsota / skupni;
    cout << "sestevek je: " << sestevek << endl;
    cout << "novi ulomek je;" << endl << vsota << endl << "-" << endl << skupni << endl;
}

float Ulomek::odstej(Ulomek drugi) {
    float a = 0, b = 0;
    a = stevec / imenovalec;
    b = drugi.stevec / drugi.imenovalec;
    return a - b;
}

int main() {
    Ulomek prvi(4.0, 2.0);
    Ulomek drugi(2.0, 3.0);
    prvi.zmnozi(drugi);
    prvi.deli(drugi);
    float razlika = prvi.odstej(drugi);
    cout << "razlika: " << razlika << endl;
    prvi.sestevek(drugi);
    return 0;
}