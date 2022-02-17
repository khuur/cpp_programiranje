#include <string>

#include <cmath>

#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;
void nafilaj(int tab[][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tab[i][j] = rand() % 30 + 21;
        }
    }

}

void izpis(int tab[][5]) {
	
	cout << "Zacel bom izpisvat" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }

	cout << "nehal sem izpisvat" << endl;
}
void zamenjaj(int tab[][5]) {
	
	cout << "Zacel bom menjat" << endl;
    for (int j = 0; j < 5; j++) {
        int tmp = tab[0][j];
        tab[0][j] = tab[4][j];
        tab[4][j] = tmp;
    }
    
    cout << " ZAMENJANO " << endl;
}
void minimum(int tab[][5]) {
    int mini = tab[0][0];
    int mini_i = 0;
    int mini_j = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tab[i][j] < mini) {
                mini = tab[i][j];
                mini_i = i;
                mini_j = j;
            }

        }
    }
    cout << "najmanjsi element se nahaja na : i = " << mini_i << " in j = " << mini_j << endl;
    cout << "njegova vrednost je pa : " << mini;

}
int main() {
    srand(time(NULL));

    int tab[5][5];
    nafilaj(tab);
    izpis(tab);
    zamenjaj(tab);
    izpis(tab);
    minimum(tab);

    return 0;
}