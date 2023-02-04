#include <iostream>

#include <cmath>

using namespace std;

int main() {

    int dvig_denarja = 20;

    if (dvig_denarja % 10 != 0) {
        cout << "Vnesi znesek deljiv z 10" << endl;
    } else {

        // Na tej tocki vemo, da je znesek deljiv z 10

        if (dvig_denarja >= 500) {
            int st_bankovcev_za_500 = dvig_denarja / 500;
            cout << "Dal ti bom : " << st_bankovcev_za_500 << "x 500e" << endl;

            dvig_denarja = dvig_denarja % 500;
        }

        if (dvig_denarja >= 200) {
            int st_bankovcev_za_200 = dvig_denarja / 200;
            cout << "Dal ti bom : " << st_bankovcev_za_200 << "x 200e" << endl;

            dvig_denarja = dvig_denarja % 200;
        }

        if (dvig_denarja >= 100) {
            int st_bankovcev_za_100 = dvig_denarja / 100;
            cout << "Dal ti bom : " << st_bankovcev_za_100 << "x 100e" << endl;

            dvig_denarja = dvig_denarja % 100;
        }

        if (dvig_denarja >= 50) {
            int st_bankovcev_za_50 = dvig_denarja / 50;
            cout << "Dal ti bom : " << st_bankovcev_za_50 << "x 50e" << endl;

            dvig_denarja = dvig_denarja % 50;
        }

        if (dvig_denarja >= 20) {
            int st_bankovcev_za_20 = dvig_denarja / 20;
            cout << "Dal ti bom : " << st_bankovcev_za_20 << "x 20e" << endl;

            dvig_denarja = dvig_denarja % 20;
        }

        if (dvig_denarja >= 10) {
            int st_bankovcev_za_10 = dvig_denarja / 10;
            cout << "Dal ti bom : " << st_bankovcev_za_10 << "x 10e" << endl;

            dvig_denarja = dvig_denarja % 10;
        }

        if (dvig_denarja != 0) {
            cout << "Ostaja se : " << dvig_denarja << endl;
        } else {
            cout << "Vzemite svoj denar" << endl;
        }

    }

    return 0;
}
