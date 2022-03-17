#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;
/*
	Naredi strukturo Akvarij o katerem hranimo volumen (cm3) in podakte o treh ribah.
	Vsaka Riba naj ima svoje ime in tudi velikost (cm)
	
	a) Napiši funkcijo, ki omogoča vpis za posamezno ribo v akvariju.
	b) Napiši funckijo, ki izpiše vse ribe.
	c) Napiši funkcijo, ki najde največjo ribo v tem akvariju.
*/

struct Riba{
    string ime;
    int velikost;
};

struct Akvarij{
    int volumen;
    Riba ribe[3];
};

// a) 
void vpis(Riba ribe [], int n) {
	
    for(int i = 0; i < n; i++) {
        fflush(stdin);
        cin>>ribe[i].velikost;
        fflush(stdin);
        cin >> ribe[i].ime;
        fflush(stdin);
    }
}

// b)
void izpis(Riba ribe [], int n) {
    for(int i = 0; i < n; i++){
        cout<<" velikost: " << ribe[i].velikost << endl;
        cout<<" ime: " << ribe[i].ime << endl;
    }
}

int main (){

	int n = 3;
    Riba ribe[n];
	
	vpis(ribe, n);	
	izpis(ribe, n);
	
	return 0;
}
