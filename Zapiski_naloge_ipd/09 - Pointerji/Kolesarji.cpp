#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Cas{
    int ure, minute, sekunde, stotinke;
};
struct Kolesar{
    string ime, priimek;
    int startna_stevilka;
    Cas cas;
};

void vpis(Kolesar kolesarji[], int n){

    for(int i = 0; i < n; i++){
        cout << "Vnesi ime: ";
        getline(cin,kolesarji[i].ime);

        /*
        cout << "Vnesi priimek: ";
        getline(cin,kolesarji[i].priimek);

        cout << "Vnesi startna_stevilka: ";
        cin>>kolesarji[i].startna_stevilka;

        */
        fflush(stdin);

        kolesarji[i].cas.stotinke = rand() % 20 + 5;
        kolesarji[i].cas.sekunde = rand() % 20 + 5;
        kolesarji[i].cas.minute = rand() % 20 + 5;
        kolesarji[i].cas.ure = rand() % 20 + 5;

    }
}

void izpis(Kolesar kolesarji[], int n){

    for(int i = 0; i < n; i++){
        cout << kolesarji[i].ime << endl;
        cout << kolesarji[i].priimek << endl;
        cout << kolesarji[i].startna_stevilka << endl;
    }
}

int calculateStotinke(Cas *cas) {

    int cas_v_stotinkah = cas->stotinke +
            cas->sekunde*100 +
            cas->minute*60*100 +
            cas->ure*60*60*100;

    cout << "cas.stotinke: " << cas->stotinke << endl;
    cout << "cas.sekunde: " << cas->sekunde << endl;
    cout << "cas.minute: " << cas->minute << endl;
    cout << "cas.ure: " << cas->ure << endl;

    cout << "v stotinkah je pa to: " << cas_v_stotinkah << endl;

    return cas_v_stotinkah;

}

void topTenKolesarji(Kolesar kolesarji[], int n){

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {

            int stotinke_prvega = calculateStotinke(&kolesarji[j].cas);
            int stotinke_drugega = calculateStotinke(&kolesarji[j+1].cas);
            if(stotinke_drugega < stotinke_prvega) {
                Kolesar tmp = kolesarji[j];
                kolesarji[j] = kolesarji[j+1];
                kolesarji[j+1] = tmp;
            }
        }
    }

    for(int i = 0; i < 2; i++){
        cout << i << ". : " << kolesarji[i].ime << endl;
    }
}

int main() {

    srand(time(NULL));
    int n = 5;
    Kolesar kolesarji[n];
    vpis(kolesarji, n);
    izpis(kolesarji, n);

    for(int i = 0; i < n; i++) {
        cout << calculateStotinke(&kolesarji[i].cas)<<endl;
    }

    topTenKolesarji(kolesarji, n);

    return 1;
}
