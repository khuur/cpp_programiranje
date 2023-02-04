#include <iostream> //MW
#include <cmath>
#include <iomanip>
using namespace std; //MW

int main() { //MW

    float kateta1, kateta2, hipotenuza;

    cout << "Vpisi kateto1: ";
    cin >> kateta1;

    cout << "Vpisi kateto2: ";
    cin >> kateta2;

    // hipotenuza = koren(kateta1 na kvadrat + kateta2 na kvadrat)

    cout << "kateta1: " << kateta1 << endl;
    cout << "kateta2: " << kateta2 << endl;

    // kmecki nacin
    // float kateta1_na_kvadrat = kateta1 * kateta1;
    // float kateta2_na_kvadrat = kateta2 * kateta2;

    // proper nacin
    float kateta1_na_kvadrat = pow(kateta1, 2);
    float kateta2_na_kvadrat = pow(kateta2, 2);

    hipotenuza = sqrt(kateta1_na_kvadrat + kateta2_na_kvadrat);

    cout << "hipotenuza : " << hipotenuza << endl;


	return 0;//MW
}//MW
