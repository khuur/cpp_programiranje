#include <iostream>
#include <cmath>

using namespace std;

/**
    Napišite program v C++, ki deklarira razred Valj s privatnimi celoštevilčnimi lastnostmi r in v.
    Razred na vsebuje:
		- privzeti (obe lastnosti postavi na 0) konstruktor,
		*- kopirni konstruktor,
		- destruktor
		- metodo za branje obeh lastnosti s tipkovnice (ta naj ponovi branje, v kolikor uporabnik vnese števila <0)
		- metodi za izračun površine in prostornine valja.

	Razred naj vsebuje še preobložene operatorje:
	    != (vrne logično 1, če sta prostornini valjev različni),
		+= (poveča obe lastnosti valja za velikost vhodnega parametra n) ter operator -.
		-  (Slednji naj deluje tako, da naj najprej preveri radij obeh valjev.
			V kolikor je radij različen, naj vrne objekt razreda Valj, ki ima obe lastnosti enaki -1.)

			Če sta radija enaka, pa naj operator – vrne objekt razreda Valj,
			katerega radij je enak radiju trenutnega objekta,
			višina pa naj se izračuna kot absolutna vrednost razlike višin obeh valjev.

	V glavnem programu omogočite vnos lastnosti objektov a in b.
	Za objekt a kličite operator a+=3, ter izračunajte razliko med objema objektoma.

	Nato še izvedite primerjavo med objektoma a in b.
	Če sta objekta enaka, naj program izpiše ustrezno sporočilo.
	Če pa ne, pa naj program izpiše kakšna je razlika med površinama obeh objektov.
	Ob koncu programa še sprostite oba objekta iz pomnilnika.

*/

class Valj{
	private:
		int r;
		int v;

	public:
		Valj() {
			r = 0;
			v = 0;
		}

		Valj(int radij, int visina) {
			r = radij;
			v = visina;
		}

		~Valj() {
            cout << "Brisem iz pomnilnika" << endl;
            print();
		}

		int getR(){
			return r;
		}
		int getV(){
			return v;
		}
		void setR(int radij) {
			r = radij;
		}
		void setV(int visina) {
			v = visina;
		}

		void vnos() {

			int r1 = -1, v1 = -1;

			while(r1 < 0){
				cout << "Vnesi radij: ";
				cin >> r1;
			}

			cout << endl;

			while(v1 < 0){
				cout << "Vnesi visino: ";
				cin >> v1;
			}

			cout << endl;

			r = r1;
			v = v1;

		}

		float povrsina () {
			float kroga = M_PI * pow(r, 2) * 2;
			float plasc = 2 * M_PI * r * v;
			return kroga + plasc;
		}

		float volumen () {
			return M_PI * pow(r, 2) * v;
		}

		void print() {
			cout << "--------------------------" << endl;
			cout << "radij: " << r << endl;
			cout << "visina: " << v << endl;
			cout << "povrsina: " << povrsina() << endl;
			cout << "volumen: " << volumen() << endl;
			cout << "--------------------------" << endl;
		}

		bool operator != (Valj drugi) {
			float v1 = volumen();
			float v2 = drugi.volumen();

			if(v1 == v2) {
				return false;
			} else {
				return true;
			}
		}

		// bonus
		bool operator == (Valj drugi) {
			return volumen() == drugi.volumen();
		}

		void operator += (int n) {
            r += n;
            v += n;
		}
		/*
			-  (Slednji naj deluje tako, da naj najprej preveri radij obeh valjev.
			V kolikor je radij različen, naj vrne objekt razreda Valj, ki ima obe lastnosti enaki -1.)

			Če sta radija enaka, pa naj operator – vrne objekt razreda Valj,
			katerega radij je enak radiju trenutnega objekta,
			višina pa naj se izračuna kot absolutna vrednost razlike višin obeh valjev.
		*/
		Valj operator - (Valj drugi) {

			if(r != drugi.getR()) {
				Valj novi(-1, -1);
				return novi;
			}

			float razlika_visin = abs(v - drugi.getV());

			Valj novi(r, razlika_visin);
			return novi;
		}
};


int main() {

    Valj prvi(10, 10);
	Valj drugi(10, 15);

	prvi.print();
	drugi.print();

    if(prvi != drugi) {
        cout << "Valja nista enaka" << endl;
    } else {
        cout << "Valja sta enaka!" << endl;
    }

    //prvi += 5;

    prvi.print();
	drugi.print();

    if(prvi != drugi) {
       cout << "Razlika med povrsinama je : " << abs(prvi.povrsina() - drugi.povrsina()) << endl;
    } else {
        cout << "Valja sta enaka!" << endl;
    }
    cout << "+++++++++++++++++++++++++++++++++++" << endl;
    Valj tretji = prvi - drugi;
    tretji.print();

    return 0;
}
