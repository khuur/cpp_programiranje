#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
/*

Napišite program, ki bo hranil podatke o 50-ih krogih, pri cemer naj
bo krog definiran s pomocjo dveh strukturnih spremenljivk tipa Tocka
(sredisce in tocka na krožnici).
Pri tem je struktura tocka definirana kot struktura
dveh celostevilènih spremenljivk (koordinati x in y).

a.
    Napišite ustrezne podatkovne tipe v C/C++, ki bodo omogocili
    hranjenje najvec 50-ih krogov, po zgoraj opisanih navodilih.

b.
    Tocka (x, y) ima x v obmocju [0, 1919], y pa v obmocju [0, 1079].
    Napisi funkcijo napolni(), ki vnese vse podatke za vse kroge.

c.
    Napisi funkcijo obsegi(), ki izracuna obseg tistga kroga, ki ima sredisce.x manjse od 800.
    Funkcija naj izpise za kater krog po vrsti gre in koliko je njegov obseg.

*/

struct Tocka{
    int x, y;
};

struct Krog{
   Tocka sredisce, kroznica;
}krogi[50];


void napolni(int n){

	// Ker je to tabela, kaže ta pointer na prvi element
    Krog* pKrog = krogi;

	// Dokler ta krog, ki ga glihkar gledamo NI ENAK zadnjemu krogu
    while(pKrog != &krogi[n-1]){

        // x == [0..1920) => [0...1919]
        pKrog->kroznica.x = rand() % (1920);

        // y == (-1..1080) => [0..1080) => [0...1079]
        pKrog->kroznica.y = rand() % (1080);

        // x == [0..1920) => [0...1919]
        pKrog->sredisce.x = rand() % (1920);
		
        // y == (-1..1080) => [0..1080) => [0...1079]
        pKrog->sredisce.y = rand() % (1080);

		// ++ je dovolj pameten, da ve, da gre za velikost enega elementa naprej
        pKrog++;
    }

}
void izpisi(int n) {

    Krog* pKrog = krogi;
	// Da lahko izpišemo kroge po vrsti (tole potrebujemo samo za izpis)
    int i = 0;

    while(pKrog != &krogi[n-1]) {
        cout << "i: " << i++ << " = " << pKrog->kroznica.x << endl;
        pKrog++;
    }
}

void obsegi() {
    // TODO

}


int main(){
    srand(time(NULL));
    napolni(50);
    izpisi(50);
    obsegi();
    return 0;
}
