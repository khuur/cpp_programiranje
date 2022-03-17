/*

*/

#include <iostream>

using namespace std;


struct Komad{
    string naziv, zvrst;
    int trajanje_v_sek;
};

struct Zgoscenka {
    string skupina, naziv_albuma;
    float cena;
    Komad pesmi[15], *Kpesem;
};

struct Element {
    Zgoscenka podatek;
    Element *nasl;
} *start = NULL;


bool push(Zgoscenka data) {

    Element *new_element = new Element();
    new_element -> podatek = data;
    new_element -> nasl = NULL;

    if(start == NULL){
        start = new_element;
        return true;
    }

    new_element -> nasl = start;
    start = new_element;
    return true;
}

// Printing elements
void printAll() {
    Element *tmp = start;
    cout << "-------- PRINT ALL ----------" << endl;
    while(tmp != NULL) {
        cout << tmp -> podatek.skupina << endl;
        tmp = tmp -> nasl;
    }
    cout << "-------- /PRINT ALL ----------" << endl;
}


void prepisi(Zgoscenka cdji[], int n) {

    cout << "Nahajava se v prepisi" << endl;

    Zgoscenka *krock = cdji;

    for(int i = 0; i < n; i++) {

        if(krock -> skupina == "A") {
            push(*krock);
        }
        krock++; // se premakneva naprej
    }

    cout << "Odhajava iz prepisi" << endl;
}



int main() {

    int n = 10;
    Zgoscenka cdji [n];

    for(int i = 0; i < n; i++) {
        cdji[i].skupina = 'A' + i;
    }

    prepisi(cdji, n);

    printAll();

    return 0;
}
