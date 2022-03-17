#include <iostream>

using namespace std;

int main()
{
	
	int tab[] = {10,3,2,2,3,3,4,56,6,7,8,9,9,4,53,3,3,3,22,2,2,3,3,45,5,9999};
	
	// sizeof(tab) pove koliko B ima ta tabela rezerviranega prostora v pomnilniku
	int velikost_celotne_tabele =  sizeof(tab);
	
	// sizeof(*tab) pove velikost vsakega posameznega elementa
	// Ker pa so itak vsi elementi notr enaki, je vseeno kerga vzameš, zato vzameš prvega.
	int velikost_prvega_elementa = sizeof(*tab); 
	
	// In pol ce delis velikost celotne tabele z enim elementom
	// (104 / 4) je direkt kolk elementov mas v tabeli
	int n = sizeof(tab)/sizeof(*tab);
	
	
	int *kazalec_na_tabelo = tab;
	
	// Izpis vseh elementov pred sortiranjem
	for(int i = 0; i < n; i++) {
		cout << *(kazalec_na_tabelo+i) << "\t";	
	}
	
	// Sortiranje elementov (bubble sort)
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n-1; j++)
		{
			if(*(kazalec_na_tabelo+j) > *(kazalec_na_tabelo+j+1))	
			{
				int tmp = *(kazalec_na_tabelo+j);
				*(kazalec_na_tabelo+j) = *(kazalec_na_tabelo+j+1);
				*(kazalec_na_tabelo+j+1)  = tmp;
			}
		}
	}
	cout << "SORTED \n\n" << endl;
	
	
	// Izpis vseh elementov po sortiranju
	// Drugi nacin premikanja kazalca po pomnilniku
	for(int i = 0; i < n; i++)
	{
		// Kle je fora, da itak ve, da kaže na integer in zrad tega mu ++ pomeni, da
		// se prestavi za en element naprej, ker ne more brat vmes.
		cout << *(kazalec_na_tabelo++) << endl;	
	}	
	
	return 0;
}
