#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Procesor
{
    string vrsta;
    int takt;
};

struct Trdi
{
    int kapaciteta;
    string proizvajalec;
};

struct Kartica
{
    string znamka;
    int velikost_pom;
};

struct Racunalnik
{
	int id;
    Kartica graficna;
    Trdi diski[10];
    Procesor proc;
};

struct Shop
{
    Racunalnik racunalniki[10];
};
Shop Kikisort(Shop bigbang)
{
	// tole napiši sam
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10-1; j++)
		{
			if(bigbang.racunalniki[j].diski[0].kapaciteta > bigbang.racunalniki[j+1].diski[0].kapaciteta)
			{
				Racunalnik tmp = bigbang.racunalniki[j];
				bigbang.racunalniki[j] = bigbang.racunalniki[j+1];
				bigbang.racunalniki[j+1] = tmp;
			}
		}
	}
	return bigbang;
}
int main()
{
	srand(time(NULL));
	
	Procesor proc1;
	proc1.takt = 3200;
	proc1.vrsta = "Intel";
	
	Trdi disk;
	disk.kapaciteta = 500;
	disk.proizvajalec = "WD";
	
	Kartica graficna;
	graficna.velikost_pom = 2;
	graficna.znamka = "NVIDIA";
	
	Racunalnik komp;
	komp.id = 0;
	komp.diski[0] = disk;
	komp.graficna = graficna;
	komp.proc = proc1;
	

	Shop bigbang;
	bigbang.racunalniki[0] = komp;
	
	for(int i = 1; i < 10; i++)
	{
		int zg = 3000;
		int sp = 400;
		
		int x = rand()% (zg - sp - 1)  + sp + 1;
		
		int velikost_diska = x - (x % 250);
		
		cout << velikost_diska << endl;
		komp.id = i;
		komp.diski[0].kapaciteta = velikost_diska;	
		bigbang.racunalniki[i] = komp;
	}
	cout << endl << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << bigbang.racunalniki[i].diski[0].kapaciteta << endl;
	}	
	
	bigbang = Kikisort(bigbang);
	
	cout << endl << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << bigbang.racunalniki[i].diski[0].kapaciteta << endl;
	}
	
	return 0;
}