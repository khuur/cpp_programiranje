// Example program
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int spremeni(int tabela[4])
{
	cout << "[v funkciji] pred spremembo value: " <<tabela[1]<<endl;
	tabela[1] = 4444;
	cout << "[v funkciji] po spremembi value: " << tabela[1]<<endl;
}


int main()
{
	int tab[4] = {1, 1, 1, 1};
	
	cout << "[pred funkcijo] original value: " << tab[1]<<endl;
	spremeni(tab);
	cout << "[po funkciji] value: " <<tab[1]<<endl;
	
	cout << "Kar smo s tem ugotovili je, da C++ parametre tretira kot globalno spremenljivko. " <<endl;
	cout << "Torej, da tudi brez returna ohranja spremenjene vrednosti v tabeli." << endl;
	
	return 0;
	
	
}
