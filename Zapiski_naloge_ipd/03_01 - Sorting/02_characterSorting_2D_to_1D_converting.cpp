#include <cstring>
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
char tab[3][5];
char tabela[15];

void izpis(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    srand(time(NULL));
    int n = 3;
    int m = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tab[i][j] = char(rand() % 26 + int('A'));
        }
    }

    int st = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tabela[st++] = tab[i][j];
        }
    }
    // SORT
    for (int i = 0; i < n * m; i++) {
        for (int j = 0; j < n * m - i - 1; j++) {
            if (tabela[j] > tabela[j + 1]) {
                char tmp = tabela[j];
                tabela[j] = tabela[j + 1];
                tabela[j + 1] = tmp;
            }
        }
    }
    // orderan izpis
    for (int i = 0; i < n * m; i++)
        cout << tabela[i];

    cout << endl;

    izpis(n, m);

    return 0;
}