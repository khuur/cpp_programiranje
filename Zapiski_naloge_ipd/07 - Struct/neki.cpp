#include <iostream>
#include <string>
using namespace std;


struct racunalnik
{
    int    id;
    string lastnik;
    string cpu;
    float  speed_cpu;
};

int ime_funkcije()
{
    
   return 1; 
}
int main()
{
    
    int  tab [10] ;
    
    for (int i = 0; i < 10; i++) 
    {
        tab[i] = i * 5;
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(tab[i] == 37)
            cout << "NAJDU";
        else
            cout << tab[i] << endl;
    }
     
    racunalnik racunalniki [3];
    int rac_id = 0;
    
    racunalnik rac0 = {.id = 0, .lastnik = "Domen", .cpu = "intel i5", .speed_cpu = 3.7};
    racunalnik rac1 = {.id = 1, .lastnik = "Miha",  .cpu = "intel i3", .speed_cpu = 2.7};
    racunalnik rac2 = {.id = 2, .lastnik = "Jure",  .cpu = "intel i7", .speed_cpu = 1.7};

    racunalniki[0] = rac0;
    racunalniki[1] = rac1;
    racunalniki[2] = rac2;
    
    for(int i = 0; i < 3; i++)
    {
        
       if (racunalniki[i].id == rac_id)
       {   
            //cout << racunalniki[i].lastnik;
            break;
       } 
    }
    
    string ime = "Kristjan";
    string priimek = "Bleiweis";
    string za_poslat = ime + "$$$" + priimek;
    
    // -------------------
    
    int pozicija_dolarja = za_poslat.find("$$$");
    cout << pozicija_dolarja << endl;
    
    int dolzina_niza = za_poslat.length();
    cout << dolzina_niza<< endl;
    
    cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
    string ime1 = za_poslat.substr(0, pozicija_dolarja);
    string priimek1 = za_poslat.substr(pozicija_dolarja + 3  , dolzina_niza - pozicija_dolarja - 1 );
    cout << ime1 << endl;
    cout << ime1.length() << endl;
    
    cout << pozicija_dolarja << endl;
    
    cout << priimek1 << endl;
    cout << priimek1.length() << endl;
    
    
    
    cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
    /*
    string [2] podatki = za_poslat.split("$");
    
    cout  << podatki[0];
    cout  << podatki[1];
       
    */    
    
    return 0;
}
