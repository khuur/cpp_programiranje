/**
	Vzemimo poljubno število in z njim počnimo tole:
	  če je sodo, ga delimo z 2,
	  če je liho, pa ga pomnožimo s 3 in prištejmo 1.
	 
	To ponavljamo, dokler ne dobimo 1. 

	Za primer vzemimo 12. 
	Ker je sodo, ga delimo z 2 in dobimo 6.
	6 je sodo, torej ga delimo z 2 in dobimo 3.
	3 je liho, torej ga množimo s 3 in prištejemo 1 => rezultat je 10.
	10 je sodo, zato ga  delimo z 2 in dobimo 5...
	Celotno zaporedje je 12, 6, 3, 10, 5, 16, 8, 4, 2, 1. 
	Ko pridemo do 1, se ustavimo.
	Napiši program, ki mu uporabnik vnese število, program pa izpiše zaporedje, ki se začne s tem 
	številom.
	
	Najdi najdaljse zaporedje v prvih desetih naravnih številih.
*/

#include <iostream>

using namespace std;

int main() {

    int stevilo = 1;
    for(; stevilo < 10; stevilo++) {

        int dolzina_zaporedja = 0;

        int kopija_stevilo = stevilo;

        while(kopija_stevilo != 1) {

           cout << kopija_stevilo << ", ";
           dolzina_zaporedja = dolzina_zaporedja + 1;

           if(kopija_stevilo % 2 == 0) {
               kopija_stevilo = kopija_stevilo / 2;
           } else {
               kopija_stevilo = (kopija_stevilo * 3) + 1;
           }
        }
        cout << endl;
        cout << "-------------------------" << endl;
        cout << "stevilo " << stevilo << endl;
        cout << "dolzina_zaporedja " << dolzina_zaporedja << endl;
        cout << "-------------------------" << endl;
    }

    cout << stevilo << endl;


    return 0;
}

