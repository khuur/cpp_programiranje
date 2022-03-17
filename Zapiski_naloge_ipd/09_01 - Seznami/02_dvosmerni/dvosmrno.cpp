#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct Imenik
{
    string ime, priimek, email;
    int GMS;
};

struct Element
{
    Imenik telefon;
    Element *prej, *nasl;
}*zacetek, *konec;

void push(Imenik n)
{
    Element *novi = new Element;
    novi -> telefon = n;
    if(zacetek == NULL && konec == NULL)
    {
        zacetek = novi;
        konec = novi;
        novi -> nasl = NULL;
        novi -> prej = NULL;
    }
    else
    {
        novi -> prej = NULL;
        novi -> nasl = zacetek;
        zacetek -> prej = novi;
        zacetek = novi;
    }
}

void izpis(bool zaporedje)
{
    Element *tmp;
    if(zaporedje == 0)
        for(tmp = zacetek; tmp != NULL; tmp = tmp -> nasl)
    {
        cout << tmp->telefon.ime << ", ";
        cout << tmp->telefon.priimek << ", ";
        cout << tmp->telefon.email << ", ";
        cout << tmp->telefon.GMS << ", ";
        cout << endl;
    }
    else
        for(tmp = konec; tmp != NULL; tmp = tmp -> prej)
    {
        cout << tmp->telefon.ime << ", ";
        cout << tmp->telefon.priimek << ", ";
        cout << tmp->telefon.email << ", ";
        cout << tmp->telefon.GMS << ", ";
        cout << endl;
    }
}
bool najdi(Imenik kljuc)
{
    Element *tmp;
    for(tmp = konec; tmp != NULL; tmp = tmp -> prej)
        if(kljuc.ime == tmp->telefon.ime && kljuc.priimek == tmp->telefon.priimek)
        return 1;
    return 0;
}

int main()
{
    zacetek = NULL;
    konec = NULL;
    Imenik podatki;
    bool x;
    cout << "vpisi ime" << endl;
    getline(cin,podatki.ime);
    cout << "vpisi priimek" << endl;
    getline(cin,podatki.priimek);
    cout << "vpisi email" << endl;
    getline(cin,podatki.email);
    cout << "vpisi stevilko" << endl;
    cin >> podatki.GMS;
    fflush(stdin);
    while(podatki.ime != "1")
    {
        push(podatki);
        cout << "vpisi ime" << endl;
        getline(cin,podatki.ime);
        cout << "vpisi priimek" << endl;
        getline(cin,podatki.priimek);
        cout << "vpisi email" << endl;
        getline(cin,podatki.email);
        cout << "vpisi stevilko" << endl;
        cin >> podatki.GMS;
        fflush(stdin);
    }
    cout << "vrsta izpisa (0=normalo 1=obratno)" << endl;
    cin >> x;
    izpis(x);
    Imenik iskani;
    iskani.ime = "Janez";
    iskani.priimek = "Novak";
    if(najdi(iskani))cout << "oseba najdena" << endl;
    else cout << "ta oseba ne obstaja" << endl;
    return 0;
}

