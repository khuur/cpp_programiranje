#include<iostream>

using namespace std;

/**
6.	Napiši program, ki izračuna letni strošek uporabe računalnika.
	Konstante v programu so naslednje: poraba CPU (125 W),
							poraba grafične kartice (250 W),
								poraba trdega diska (12 W),
										ventilatorji (10 W),
									poraba monitorja (40 W).
	Računalnik dela v povprečju 6 ur na dan, vsak dan v tednu.
	Cena kilovatne ure znaša 0,08180 EUR.
*/

int main() {
	float poraba = 0.437;
	float cena = 0.08180;
	float cas = 6*7;
	cout << poraba*cena*cas << endl;
    return 0;
}
 
