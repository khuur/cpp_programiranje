#include <iostream>

using namespace std;

class Ulomek {

    public:
        float imenovalec;
        float stevec;


    Ulomek() {
        stevec = 0;
        imenovalec = 1;
    }

    Ulomek(float s, float i) {
        stevec = s;
        imenovalec = i;
    }

    ~Ulomek() {
        cout << "Ej, brisem iz spomina" << endl;
    }

    float getValue() {
        return stevec / imenovalec;
    }

    float sestej(Ulomek drugi);

};

float Ulomek::sestej(Ulomek drugi){

    float skupni_imenovalec;
    float skupni_stevec;

    if(drugi.imenovalec == imenovalec) {
        skupni_stevec = stevec + drugi.stevec;
        skupni_imenovalec = imenovalec;
    } else {
        skupni_stevec = (stevec * drugi.imenovalec) + (drugi.stevec * imenovalec);
        skupni_imenovalec = (drugi.imenovalec * imenovalec);
    }
    
    return skupni_stevec / skupni_imenovalec;
}


int main() {

    Ulomek moj_ulomek(1.0, 4.0);

    cout << moj_ulomek.stevec << endl;
    cout << moj_ulomek.imenovalec << endl;

    cout << moj_ulomek.getValue() << endl;

    Ulomek drug_ulomek(1.0 , 3.0);

    cout << moj_ulomek.sestej(drug_ulomek) << endl;


    return 0;
}
