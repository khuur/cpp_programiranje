#include <iostream>

using namespace std;

void printAll(int *p, int n) {

   for(int i = 0; i < n; i++){
        cout << *p << endl;
        p++;
   }
}

void addFiveToEveryElement(int *p, int n) {

    for(int i = 0; i < n; i++){
        *p += 5; // vzame element, mu doda 5 in ga nato shrani nazaj v tabelo
        p++; // se premakne naprej za eno mesto
    }
}

int main()
{
	int n = 10;
	int tab[n];

	for(int i = 0; i < n; i++) {
        tab[i] = i * 7;
	}

	for(int i = 0; i < n; i++) {
        cout << tab[i] << endl;
	}

    cout << "----------- do tu ni blo nobenih pointerjev" << endl;
    cout << "Vse kar smo zares nardil, je blo to, da mamo tabelo z veckratniki stevila 7. [0,63]" << endl << endl;

    cout << "*p = tab; pomen, da mamo pointner, ki kaze na tabelo elementov oz. bolj natancno, kaze na prvi element torej tab[0]" << endl;
	int *p = tab;


	for(int i = 0; i < n; i++) {
        cout << "*p == " << *p << endl;
        // p++ je dost pametn, da ve za kater tip objektov gre in se zna prestavt na naslednji naslov
        // nima veze a je to integer al pa nek custom struct.

        p++;
	}

	cout << "----------- funkcije" << endl;
    p = tab;
    printAll(p, n);
    addFiveToEveryElement(p, n);
    printAll(p, n);

	return 0;
}
