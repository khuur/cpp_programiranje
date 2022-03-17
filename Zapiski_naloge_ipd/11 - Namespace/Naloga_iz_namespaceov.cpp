/*
Napiši program v C++, ki deklarira abstraktni razred Drevo z lastnostjo zap_st_drevesa in metodo vpis. Izpelji  "pravi" razred Smreka, ki vsebuje lastnosti starost in višina ter metode za:
-    izpis podatkov;
-    preobloženi operator >, ki primerja višine dveh smrek;
-    metodo, ki računa povprečno letno rast.

V funkciji main beri podatke za 5 smrek in izpiši podatke za najvišjo. Program spremeni tako, da se bo abstraktni razred Drevo nahajal v imenskem prostoru Gozd ter ponovno prikaži klice vseh metod razreda Smreka.
*/
#include <iostream>
using namespace std;
namespace Gozd
{
	class Drevo
	{
		protected:
			int zap_st_drevesa;
		public:
			virtual void vpis() = 0;
		
	};
}
class Smreka : public Gozd::Drevo
{
	public:
		int starost;
		int visina;
	Smreka()
	{
		starost = 0;
		visina = 0;
	}
	void vpis()
	{
		cout << "Please enter heigth of this smreka" << endl;
		cin >> visina;
		cout << "Please enter oldness of this smreka" << endl;
		cin >> starost;
	}
	void izpis()
	{
		cout << "Smreka je visoka: " << visina << endl;
		cout << "Smreka je stara: " << starost << endl;
	}
	bool operator > (Smreka druga)
	{
		return visina>druga.visina;
	}
	float averageGrow()
	{
		return (float) visina/starost;
	}
};
int main()
{
	
	Smreka smreka;
	smreka.vpis();
	
	Smreka druga;
	druga.vpis();
	
	cout << (smreka > druga)<< endl;
	
	Smreka smreke[5];
	for(int i = 0; i < 5; i++)
	{
		smreke[i].vpis();
	}
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if(smreke[j] > smreke[j+1])
			{
				Smreka tmp = smreke[j];
				smreke[j] = smreke[j+1];
				smreke[j+1] = tmp;
			}
		}
	}
	for(int i = 0; i < 5; i++)
	{
		smreke[i].izpis();
	}
	return 0;
}