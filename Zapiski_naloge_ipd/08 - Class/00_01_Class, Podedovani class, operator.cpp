#include <iostream>

using namespace std;

class BazniRazred {
    // tole ostane samo v BaznemRazredu
    private:
        int private_value;

    // tole se prenese tudi v vse podedovane razrede
    protected:
        int stevilka;

    // vse kar je public je pa dostopno iz kjerkoli
    public:
        virtual void vpis() = 0;
		virtual void izpis() = 0;

        void publicMethod() {
            cout << "lahko me poklices iz kjerkoli!" << endl;
        }
};
// Vse protected vrednosti in metode se prenesejo kot PROTECTED v Izpeljan razred.
class IzpeljaniRazred: public BazniRazred {
	private:
		string ime;
    public:
        void vpis();
		void izpis();
		bool operator == (IzpeljaniRazred i);

};

class DrugicIzpeljanRazred: public IzpeljaniRazred {
	private:
		string priimek;
    public:
        void printAll() {
            // Zato lahko tudi tukaj dostopamo do "stevilka";
            cout << "stevilka" << stevilka << endl;
            cout << "priimek" << priimek << endl;
        }

};

void IzpeljaniRazred::vpis() {
	cout << "Vpisite ime: ";
    cin >> ime;
	cout << endl;
	cout << "Vpisite stevilko";
    cin >> stevilka;
	cout << endl;
}

void IzpeljaniRazred::izpis() {
    cout << "ime: " << ime << endl;
    cout << "stevilka: " << stevilka << endl;
	cout << endl;
}

bool IzpeljaniRazred::operator == (IzpeljaniRazred i) {
    if (ime == i.ime) {
        cout << "enako ime" << endl;
		return true;
    }
	return false;
}
int main() {
    IzpeljaniRazred a, b;
    a.vpis();
    b.vpis();

    a.izpis();
    b.izpis();

    b.publicMethod();

    if(a == b) {
        cout << "a in b sta enaka" << endl;
    }

    DrugicIzpeljanRazred c;
    c.vpis();
    c.printAll();
    return 0;
}
