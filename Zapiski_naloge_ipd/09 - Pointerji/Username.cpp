#include <iostream>
#include<string.h>

using namespace std;

/*

void funkcija(string ime,string priimek,string oddelek){
// 100 je zacasna stevilka
    char *p,*p1,*p2,UporabniskoIme[100];
    getline(cin,ime);
    getline(cin,priimek);
    getline(cin,oddelek);
for(int i=0;i<strlen(uporabniskoIme);i++){
//shraniti more ime , priimek ter oddelek vase
  for(p=&ime;p<size(ime);p++){
      uporabniskoIme[i]=p->ime;
  }
}
for(int i=0;i<strlen(uporabniskoIme);i++){
 for(p1=&priimek;p1<size(priimek);p1++){
    uporabniskIme[i+size(ime)]=p1->priimek[0];
    uporabniskoIme[i+size(ime)]=p1->priimek[1];
 }
}

for(int i=0;i<strlen(uporabniskoIme);i++){
 for(p2=&oddelek;p2<size(oddelek);p2++){
    uporabniskoIme[i+size(ime)+size(priimek)]=p2->oddelek[0];
    uporabniskoIme[i+size(ime)+size(priimek]=p2->oddelek[size(oddelek)];
    uporabniskoIme[i+size(ime)+size(priimek]=p2->oddelek[size(oddelek)-1];
    }
 }

for(int i=0;i<strlen(uporabniskoIme);i++){
    cout<<UporabniskoIme[i]<<endl;
}
}
*/

string getUsername(string ime, string priimek, string oddelek){

    string username = "";

    for(int i = 0; i < ime.size(); i++) {
        char crka = ime.at(i);
        username += crka;
    }

    for(int i = 0; i < priimek.size() && i < 2; i++) {
        char crka = priimek.at(i);

        // ce je mala crka, naj jo naredi veliko
        if((int)crka > 97) {
            crka = crka - 32;
        }
        username += crka;
    }

    username += "@";

    username += oddelek.at(0); // R

    bool najdu_presledek = false;

    for(int i = 0; i < oddelek.size(); i++) {
        char crka = oddelek.at(i);

        if((int)crka == 32) {
            najdu_presledek = true;
            continue;
        }

        if(najdu_presledek) {
            username += crka;
        }
    }


    return username;
}
int main()
{
    string ime = "Janja";
    string priimek = "Dobnikar";
    string oddelek = "Racunalniski 2A";

    string izracunan_rezultat = getUsername(ime, priimek, oddelek);
    cout << "Rezultat je : " << izracunan_rezultat;
    return 0;
}
