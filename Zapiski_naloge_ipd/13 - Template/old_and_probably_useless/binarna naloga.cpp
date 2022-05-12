/*1.	NPCPP, ki bo
a.	S pomoèjo funkcije nakljucna napolnil datoteko s 100 nakljuènimi malimi èrkami angleške abecede, ter bo tako shranjeno datoteko shranil
b.	S pomocjo funkcije izbrisi izbrisal iz datoteke use crke, ki ne sodijo v slovensko abecedo izbrisal (prepisovanje)
c.	S pomoèjo funkcije spremeni spremenil vse samoglasnike na datoteki v zvezdice s pomoèjo funkcij za direktni dostop (kazalci)

2.	NPCPP, ki bo
a.	Omogoèil vnos podatkov o vozilu na binarno datoteko. Pri èemer hranimo: serijska stevilka, model, letnik, cena.
    Vnos na dat. Naj se konèa takrat, ko uporabnik za serijsko stevilko vnese vrednost 0.
b.	S pomoèjo funcije povpreèje izraèunal povpreèno starost vseh avtomobilov, katerih model Golf
c.	S pomoèjo funkcije briši izbrisal vse tiste avtomobile, ki so starejši od 20 let. Pri brisanju zopet uporabite  direktni dostop
*/
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
using namespace std;
fstream file;
string path = "C:\\vaja\\vajaa.bin";
string golf = "golf";
struct vozilo
{   
	long serijska_stevilka;
    char model[20];
    short letnik;
    float cena;
};

void vnos()
{   vozilo avto;
    file.open(path.c_str(), ios::out|ios::in|ios::binary);
    if (file.is_open())
    {    file.close();
    file.open(path.c_str(),ios::ate|ios::binary);



    cout<<"Vpisi serijsko stevilko"<<endl;
    cin>>avto.serijska_stevilka;
    while(avto.serijska_stevilka!=0)
     {
        cout<<"Vpisi model"<<endl;
        fflush(stdin);
        gets(avto.model);
        fflush(stdin);
        cout<<"Vpisi letnik "<<endl;
        cin>>avto.letnik;
        cout<<"Vpisi ceno"<<endl;
        cin>>avto.cena;
        file.write((char*)&avto, sizeof(avto));
        cout<<"Vpisi serijsko stevilko"<<endl;
        cin>>avto.serijska_stevilka;
        }
    }
    file.close();
}
void prestavi() // funkcija ki nti zapis prestavi na konec datoteke, na nto mesto pa vpiše podatke o novem avtu
{ vozilo avto,avtozac;
    file.open(path.c_str(), ios::in|ios::out|ios::binary);
    int n;
    cout<<"VNESI MESTO ZAPISA"<<endl;
    cin>>n;
    file.seekg((n-1)*sizeof(avto));
    file.read((char*)&avtozac, sizeof(avto));

    cout<<"Vpisi serijsko stevilko"<<endl;
    cin>>avto.serijska_stevilka;
    cout<<"Vpisi model"<<endl;
    fflush(stdin);
    gets(avto.model);
    fflush(stdin);
    cout<<"Vpisi letnik "<<endl;
    cin>>avto.letnik;
    cout<<"Vpisi ceno "<<endl;
    cin>>avto.cena;

    file.seekp((n-1)*sizeof(avto));
    file.write((char*)&avto, sizeof(avto));

    file.close();
    file.open(path.c_str(), ios::out|ios::binary|ios::ate);
    file.write((char*)&avtozac, sizeof(avto));
    file.close();
}


void izpis()
{vozilo avto;
    file.open(path.c_str(), ios::in|ios::binary);
    while(file.eof()!=1)
    {file.read((char*)&avto, sizeof(avto));
        cout<<"SERIJSKA:"<<avto.serijska_stevilka<<endl;
        cout<<"MODEL:"<<avto.model<<endl;
        cout<<"LETNIK:"<<avto.letnik<<endl;
        cout<<"CENA:"<<avto.cena<<endl;

    }
    file.close();


}

float povprecje()
{ vozilo avto;
    float povp=0; short i=0;
    file.open(path.c_str(), ios::in|ios::binary);
    while(file.eof()!=1)
    {  file.read((char*)&avto, sizeof(avto));
        if(strcmp (avto.model,"golf")==0)           //STRCMP = STRING COMPARE
        {
         povp+=avto.letnik;
         //cout<<povp<<endl<<endl;
         //cout<<"I= "<<i<<endl;
         i++;
        }

    }
    file.close();
    float pobpr=0;
    pobpr=povp/i;
    return pobpr;


}
void izbris()
{   vozilo avto;
    short pos;
    int i;
    file.open(path.c_str(), ios::in|ios::out|ios::binary);
    while(file.eof()!=1)
    { file.read((char*)&avto, sizeof(avto));
        if(avto.letnik<1994)
        {avto.serijska_stevilka=0;
         avto.cena=0;
         avto.letnik=0;
         strcpy(avto.model,"*");                // STRCPY = STRING COPY

        }
        pos=file.tellg();
        file.seekp(pos-sizeof(avto));
        file.write((char*)&avto, sizeof(avto));
    }
    file.close();
}

//
int main()
{   vnos();
    float x=0;
    x=povprecje();
    cout<<x<<endl;
    //izbris();
    izpis();

    return 0;
}
