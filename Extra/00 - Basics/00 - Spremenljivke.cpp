int stevec = 0;
float pi = 3.14159;
char spol = 'M';
bool ali_je_moski = true;

int stevilo_otrok = 5;

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