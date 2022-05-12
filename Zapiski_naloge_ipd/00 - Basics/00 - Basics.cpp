// Preden sploh začnemo programirat, me zanima koliko izmed vas je že kej sprogramiralo v Javi, C-ju, Pyhtonu?

// Najprej par magičnih besed
// C++ ima približno 100 rezerviranih besed.
// To pomeni, da jih mi ne smemo uporabljati kot imena spremenljivk.
// par primerov: "if", "while", "for", "return" 

#include <iostream> //MW
using namespace std; //MW

int main() { //MW
	
	
	return 0;//MW
}//MW

// Prva uporabna stvar, ki jo program lahko naredi je to, da nekaj izpiše na ekran
// To je lahko neko besedilo. Dejte se izogibat čšž in ostalim nestandardnim znakom.
cout << "Pozdravljen :) ";

// S pomočjo komande "cout" mu povemo, da bi mi radi na zaslon izpisali nekaj.
// Izpišemo lahko več stvari zapored in sicer tako, da vstavimo "<<" med elemente.
cout << "Pozdravljeni " << "na " << "tecaju C++";

// TODO - VSI: Naj vam na zaslon izpiše "Pozdravljen [vaše ime]"

cout << "Pozdravljen Kristjan" << endl;

// C++ po defaultu izpisuje v eno vrstico od leve proti desni.
// Če želimo iti v novo vrstico napišemo "endl", kar pomeni "end line".


cout << 5 << endl;
cout << 10 << endl;

cout << "-------------" << endl;
cout << "sestevanje in odstevanje " << endl;
cout << "-------------" << endl;
cout << 1 + 2 << endl;
cout << 5 + 7 << endl;
cout << 8 - 2 << endl;


cout << "-------------" << endl;
cout << "mnozenje " << endl;
cout << "-------------" << endl;
cout << 4 * 2 << endl;
cout << 7 * 9 << endl;


cout << "-------------" << endl;
cout << "mnozenje in sestevanje " << endl;
cout << "-------------" << endl;
cout << 5+(3 * 10) << endl;
cout << (5+3) * 10 << endl;


cout << "-------------" << endl;
cout << "deljenje " << endl;
cout << "-------------" << endl;
cout << 4 / 2 << endl;
cout << 4 / 1.5 << endl;
// int / int == int
cout << 8 / 3 << endl;

// ostanek pri deljenju
cout << 15 % 4 << endl




cout << "-------------" << endl;
cout << "primerjanje " << endl;
cout << "-------------" << endl;
cout << (10 > 5) << endl;
cout << (10 == 5) << endl;

// >=, >, ==, !=, <, <=
// &&, ||, !

cout << "-------------" << endl;
cout << "uporaba zunanjih knjiznic " << endl;
cout << "-------------" << endl;
cout << pow(2, 10) << endl;
cout << sqrt(9) << endl;

// #include<cmath>
// https://www.programiz.com/cpp-programming/library-function/cmath
// matematicne: sin, cos, M_PI, log, log2, pow, sqrt
// zaokrozevanje: floor, round, ceil, trunc


cout << 2.4555554 << setprecision2 << endl;
cout << "-------------" << endl;

// Okay, do zdej smo spoznal vse kar se tiče izpisovanja na zaslon.
// To je fajn, ampak ni pa še neki ful uporabno

// Preden se lotimo vpisovanja iz tipkovnice v program, mormo pripravit prostor
// kam se bo to shranilo

// en način, da si predstavljate kaj so spremenljivke je tko, da si predstavljate
// eno omaro v kateri so predali. Na predalu piše ime spremenljivke in notr je listek
// ki ima napisan kaj ta predal hrani.

// Če imamo nekaj, kar se šteje (torej so to cela števila), bomo uporabili int

/*
	int = pomeni, da je to celo stevilo
	
	stevilo_narejenih_predmetov = ime spremenljivke oz. prostorcka v 
	Ime spremenljivke je lahko karkoli, kar ni rezervirana besede in se začne s crko
	ime1 [veljavno]
	1ime [ni veljavno]
	
	
	4 = vrednost, ki jo zelimo v ta prostorcek shranit.

*/

int stevilo_narejenih_predmetov = 4;

int a;
a = 5;

// ni pa glih tko kt v matematiki, da bi blo 5 = a tud sprejemljivo
// kar je na desni izračunaj in NATO shrani v tisto, kar je napisano na levi strani


// če želimo necela števila shraniti v spomin ostanejo pravila enaka, samo rezervirana beseda se spremeni. 

// necela stevila == float
// pri necelih številih pazi, da uporabiš piko in ne vejice
float pi = 3.14159;

// ena sama crka == char (character)
// pri deklariranju chara pazi, da uporabiš enojne narekovaje.
// char lahko hrani TOČNO eno črko (ne nobene, ne dveh, ampak samo eno)
char spol = 'M';

// binarna vrednost, torej ima lahko vrednost "DA" ali pa "NE".
// Verjetno ste se na neki točki delal norca iz programerjev in govorili, da precej binarno razmišljajo in da so za njih vse 1 ali 0.
// Evo, sedaj ste soočeni s točno tem in sicer v programiranju mora biti vse definirano
// 
bool ali_je_moski = true;

bool ali_ima_izpit_za_avto = true;

bool ali_ima_narejen_predemet_matematika_1 = false;

//--------------------------
// Lahko pa deklariramo tudi več spremenljivk hkrati in sicer na tak način, da jih ločimo z vejico.

char crka1, crka2, crka3;
// string je še ena rezervirana beseda in sicer označuje, da bo tu notri neko besedilo
// primer praznega stringa je "";
// 
string moje_ime = "Kristjan";
int starost = 24;
float visina = 1.88;

cout << "Pozdravljen " << moje_ime << endl;


//--------------------------
// prepisovanje spremenljivk

int stevilka = 5;
cout << "stevilka : " << stevilka << endl;

stevilka = stevilka + 1;
cout << "stevilka : " << stevilka << endl;



//--------------------------


starost = starost + 1;

starost += 1;

starost++;
++starost;

startost--;

starost = starost - 1;

float visina_cm;

visina_cm = visina * 100;



// maybe povem še za ASCII table
char crka = 'A';

crka = crka + 1;

cout << "crka : " << crka << endl;




//------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	float temperatura_v_celzijah;
	
	cout << "Prosim vas, da vpisete temperaturo v celzijah : ";
	cin >> temperatura_v_celzijah;
	
	float temperatura_v_fahrenheithih = (temperatura_v_celzijah * (9.0/5)) + 32;
	
	cout << "Temperatura v C : " << temperatura_v_celzijah << endl;	
	cout << "Temperatura v F : " << temperatura_v_fahrenheithih << endl;

    return 0;
}


//------------------------------------------------------------