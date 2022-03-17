

#include<iostream>

using namespace std;

/**
8.	Napišite program, ki bo glede na dani niz števil poiskal največjega med zmnožki katerih koli dveh
	števil v nizu. Vhod v prvi vrstici je n, število števil v nizu, vhod v drugi vrstici pa niz n števil, ločenih s
	presledkom. Program izpiše največji zmnožek para števil.
	Za testiranje lahko uporabite seznam 20 števil:
	536 332 3567 321 35 436 2334 26372 4332 3 452 3452 33 452 586 22557 9085
	5111 8900 75

*/

int main() {

    int tab[20] = {536,332,3567,321,35,436,2334,26372,4332,3,452,3452,33,452,586,22557,9085,5111,8900,75};

    int maximum_zmnozek = 1;
    int najvecja_stevilka_1 = 0;
    int najvecja_stevilka_2 = 0;


    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 19; j++) {
            if(i != j) {
                int tmp_zmnozek = tab[i] * tab[j];

                if(tmp_zmnozek > maximum_zmnozek) {
                    najvecja_stevilka_1 = tab[i];
                    najvecja_stevilka_2 = tab[j];
                    maximum_zmnozek = najvecja_stevilka_1 * najvecja_stevilka_2;
                }
            }
        }
    }

    cout << "Najvecji zmnozek dasta stevili : " << najvecja_stevilka_1 << " * ";
    cout << najvecja_stevilka_2 << ", kar je " << najvecja_stevilka_1 * najvecja_stevilka_2 << endl;


    return 1;
}
