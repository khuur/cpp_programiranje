#include <cstring>

#include <string>

#include <cmath>

#include <ctime>

#include <cstdlib>

#include <iostream>

using namespace std;
// izpis tabele 
void izpis(char tab[], int n) {
	cout << "--- izpis ---" << endl;
    for (int i = 1; i <= n; i++) {
        cout << tab[i - 1] << "\t";

        if (i % 10 == 0){
            cout << endl;
		}
    }
	cout << "--- konec izpis ---" << endl;

}
void prepis(char tab[]) {
    tab[0] = 'K';
    tab[1] = 'K';
}
void prestej(char tab[], int n, int st_poj[]) {
    for (int i = 0; i < n; i++) {
        if (tab[i] >= 'A' && tab[i] <= 'Z') {
            int index = int(tab[i] - 'A');
            st_poj[index]++;
        }
    }
}
void izpisiCrke(int st_poj[]) {
    for (int i = 0; i < 26; i++) {
        cout << "Crka " << char(i + int('A')) << " se pojavi " << st_poj[i] << " krat." << endl;
    }
}
int main() {
    srand(time(NULL));

    int st_poj[26];
    for (int i = 0; i < 26; i++){
        st_poj[i] = 0;
	}
    
	int n = 5;
    char tab[n];
    for (int i = 0; i < n; i++) {
        tab[i] = char(int('A') + rand() % 26);
    }

    izpis(tab, n);
    prepis(tab);
    izpis(tab, n);
    prestej(tab, n, st_poj);
    izpisiCrke(st_poj);

    return 0;
}

// Za vajo naredi stetje posameznih samoglasnikov
// char[60] = "AAAAIUAZTATEEEIIOGOOOOUUURTDZGJGFGDFUFJUU"
// A : 7x
// E : 3x
// I : 2x
// O : 5x
// U : 6x