#include <iostream>
#include <string>
using namespace std;

struct Oseba{
    string ime, priimek;
    int stevilka;
    string email;
};

struct Element {
    Oseba oseba;
    Element *prej, *nasl;
} *zacetek, *konec;

void vpis(Oseba oseba){

    Element *novi = new Element;
    novi -> oseba = oseba;

    // v seznamu ni nobenega elemnta
    if(zacetek == NULL && konec == NULL) {
        zacetek = novi;
        konec = novi;
        novi -> nasl = NULL;
        novi -> prej = NULL;
    } else {
        novi -> nasl = zacetek;
        novi -> prej = NULL;
        zacetek -> prej = novi;
        zacetek = novi;

    }
}

void vpisi_10_oseb(){

    for(int i = 0; i < 10; i++){
        Oseba oseba;
        oseba.ime = "Kris";
        oseba.priimek = "Tjan";
        oseba.stevilka = i;
        oseba.email = "kris.tjan@neki.si";

        vpis(oseba);
    }
}

void izpisi() {
    Element *tmp = zacetek;

    while(tmp != NULL){
        cout << tmp->oseba.stevilka << endl;
        tmp = tmp->nasl;
    }
}

void izpisi_obratno() {

    Element *tmp = konec;

    while(tmp != NULL){
        cout << tmp -> oseba.stevilka << endl;
        tmp = tmp -> prej;
    }
}

Oseba isci(int stevilka){

    Element *tmp = zacetek;

    while(tmp != NULL){
        if(tmp->oseba.stevilka == stevilka){
            return tmp->oseba;
        }
        tmp = tmp->nasl;
    }
}

// izbriše prvi element v seznamu
void pop() {

    Element *brisi_me = zacetek;

    // pomeni, da je zadnji element v sezanmu
    if(brisi_me -> nasl == NULL) {
        cout << "izbrisal bom : " << brisi_me->oseba.stevilka<<endl;
        delete brisi_me;
        zacetek = NULL;
        konec = NULL;
    }
    else {
        cout << "izbrisal bom : " << brisi_me->oseba.stevilka<<endl;
        brisi_me->nasl->prej = NULL;
        zacetek = brisi_me->nasl;
        delete brisi_me;
    }
}

void izbrisi_vse(){

    while(zacetek != NULL){
        pop();
    }
    cout << "Vsi elementi so izbrisani" << endl;
}

int main() {

    vpisi_10_oseb();
    //izpisi();
    izpisi_obratno();

    Oseba sedem = isci(7);
    cout << sedem.ime << " " << sedem.stevilka << endl;

    izbrisi_vse();
    izpisi_obratno();

    return 1;
}
