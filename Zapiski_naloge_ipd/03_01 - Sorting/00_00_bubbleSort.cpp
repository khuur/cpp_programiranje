#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void izpis(int tab[]) {
    for (int i = 0; i < 10; i++)
        cout << tab[i] << "\t";
    cout << endl;
}

int main() {
    int n = 10;
    srand(time(NULL));
    int tab[10];

    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 50 + 1;
    }

    izpis(tab);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] < tab[j + 1]) {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
    izpis(tab);
	
	return 0;
}