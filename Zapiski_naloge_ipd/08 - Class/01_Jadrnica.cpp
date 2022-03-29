#include <iostream>
#include <string>

using namespace std;

class Jadrnica {
	// tole se bo prenasalo tudi na vse podedovane razrede
    protected:
        string ime_jadrnica;
		int dolzina_jadrnica;
		int hitrost_jadrnica;
		
    public:
        void vnos_jadrnica() {
            cout << "vnesi ime jadrnice: ";
			getline(cin, ime_jadrnica);
            cout << endl;
			
			cout << "vnesi hitrost jadrnice: ";
			cin >> hitrost_jadrnica;
            cout << endl;
			
			cout << "vnesi dolzino jadrnice: ";
			cin >> dolzina_jadrnica;
            cout << endl;			
        };
    Jadrnica() {
        vnos_jadrnica();
    }
	
	Jadrnica(string ime, int dolzina, int hitrost) {
        ime_jadrnica = ime;
		dolzina_jadrnica = dolzina;
		hitrost_jadrnica = hitrost;
    }
};

class Motorni_coln {
    protected:
        string ime_coln;
		int moc_motor;
		int hitrost_coln;
    public:
        void vnos() {
            cout << "vnesi ime colna: ";
			getline(cin, ime_coln);
            cout << endl;
			
			cout << "vnesi hitrost colna: ";
			cin >> hitrost_coln;
            cout << endl;
			
			cout << "vnesi moc motorja colna: ";
			cin >> moc_motor;
            cout << endl;	
        };
		
	// Konstruktor brez parametrov	
	Motorni_coln() {
		vnos();
	}
		
    Motorni_coln(string ime, int moc, int hitrost) {
		ime_coln = ime;
		moc_motor = moc;
		hitrost_coln = hitrost;		
    }
};

// Podedovan class iz dveh baznih razredov
// ta class ima vse protected vrednosti in metode iz obeh baznih classov
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