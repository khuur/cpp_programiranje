#include <string>
#include <cmath>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Ulomek {
    // Private stvari lahko dostopaš samo znotraj tega classa
    // Aka ne moreš rečt object.private_value, ampak moreš narest getterje pa setterje
    // Temu tudi služi getPrivateValue(), ki ti samo vrne vrednost
    private:
        int private_value;
		float stevec;
		float imenovalec;

    // Tale funkcija se lahko kliče samo znotraj class-a, ker je pod predelom "private"
    int getValuePrivate() {
		// samo tok, da mamo za test
        return 543345;
    }

    public:
        // Kar je kle je pa dostopno tudi skoz objekte
        // aka komot rečeš object.stevec pa ti ga da vn.
        int public_value;

    int getPrivateValue() {
        cout << "EN DOSTOPA DO Private_value" << endl;
        return private_value;
    }

    void setPrivateValue(int new_private_value) {
        private_value = new_private_value;
    }

    // Prva vrsta konstruktorjev je taka, ki ne potrebuje nobenih vhodnih parametrov
    Ulomek() {
        stevec = 0;
        imenovalec = 1;
        cout << "To je prazen ulomek" << endl;
    }

    // Druga vrsta konstruktorje je taka, da potrebuje enega ali več parametrov
    // Lahko imamo več konstruktorjev, če imajo različne parametre (tipe ali pa število parametrov)
    Ulomek(float stevec) {
        cout << "To je ubistvu celo stevilo" << endl;
        this->stevec = stevec;
        imenovalec = 1;
    }
    Ulomek(float stevecc, float imenovalecc) {
        cout << "To je ubistvu taprav ulomk" << endl;
        stevec = stevecc;
        imenovalec = imenovalecc;
    }

	// Kopirni konstruktor
	// Naredi kopijo objekta
	// S tem ubistvu override-amo default konstruktor.
	// Default konstruktor naredi shallow copy (kaže na isti prostor v pomnilniku)
	// Tale naš pa naredi deep copy (kar pomeni, da dejansko prepiše vrednosti v nov objekt)
    Ulomek(Ulomek &u1) {
        cout << "Sem v kopirnem konstruktorju" << endl;
		stevec = u1.stevec;
		imenovalec = u1.imenovalec;
	}

	// primer destruktorja
	// Ta se sam pokliče, ko je konec programa
	// ali pa če mi izbrišemo s funkcijo delete (samo pod pogojem, da si ga kreiru z "new")

    //The destructor does not have arguments.
    //It has no return type not even void.
	~Ulomek() {
	    cout << stevec << "/" << imenovalec << "\n";
        cout << "Ej, brisem iz spomina" << endl;
    }


    // primer funkcije, ki je dostopna tudi izven objekta (recimo iz maina)
    float getValue() {
        return (stevec / imenovalec);
    }

	// #TAG-1
	// Tukej samo povemo, da bomo mel funkcijo, ki bo sestela 2 ulomka in vrnila nov ulomek.
	Ulomek sestej(Ulomek drugi);

    // Tole pa naredi to, da se ulomek lahko sešteje z drugim ulomkom.
    // c = a + b, pri čemer je a in b objekt tipa Ulomek.
    Ulomek operator + (Ulomek drugi) {
        float zgori = (stevec * drugi.imenovalec + drugi.stevec * imenovalec);
        float spodi = imenovalec * drugi.imenovalec;
        Ulomek nov_ulomek(zgori, spodi);
        return nov_ulomek;
    }
};

// primer deklariranja funkcije izven razreda.
// #TAG-1
Ulomek Ulomek::sestej(Ulomek drugi){

    float skupni_imenovalec;
    float skupni_stevec;

    if(drugi.imenovalec == imenovalec) {
        skupni_stevec = stevec + drugi.stevec;
        skupni_imenovalec = imenovalec;
    } else {
        skupni_stevec = (stevec * drugi.imenovalec) + (drugi.stevec * imenovalec);
        skupni_imenovalec = (drugi.imenovalec * imenovalec);
    }

	Ulomek nov_ulomek(skupni_stevec, skupni_imenovalec);
    return nov_ulomek;
}


int main() {
    // če želiš klicat konstruktor brez parametrov ne rabiš dat niti oklepajev.
    Ulomek prvi;
    // Lahko narediš tudi nov Ulomek in potem samo rečeš, da naj 'drugi' kaže na ta prostor v pomnilniku.
    // Če to narediš na tak način, lahko tudi explicitno pokličeš 'delete drugi;' in bo takrat izbrisalo iz pomnillnika.
    // Destruktorji se pa drugač kličejo sami od sebe
    //              (navadno ob koncu programa, ampak lahko pa tud kej prej (recimo, da gre vn iz scope-a od for-a))
    Ulomek *drugi = new Ulomek(111.0, 22223.0);
    Ulomek tretji(2.0, 3.0);

	Ulomek cetrti = tretji;

	cout << tretji.getValue() << endl;
	cout << cetrti.getValue() << endl;

	tretji = tretji + *drugi;

	delete drugi;

	cout << tretji.getValue() << endl;
	cout << cetrti.getValue() << endl;

    //Ulomek sestevek = drugi + tretji;
    //sestevek.value();

    return 0;
}
