#include <iostream>
#include <ctime>
using namespace std;

template <class Type>
class Matrica
{
    Type tab[3][3];

public:
    Matrica()
    {
        int i,j;
        for (i=0; i<3; i++)
            for (j=0; j<3; j++) tab[i][j]=rand()%(101)-50;
    }
    void izpis()
    {
        int i,j;
        for (i=0; i<3; i++)
        {    for (j=0; j<3; j++) cout << tab[i][j] <<"\t";
            cout << endl;
        }
        cout << endl;
    }
    Matrica operator + (Matrica drugi)
    {
        Matrica vsota;
        int i,j;
        for (i=0; i<3; i++)
            for (j=0; j<3; j++) vsota.tab[i][j]=tab[j][i] + drugi.tab[i][j];
        return vsota;
    }
    void operator *= (Type n)
    {
        int i;
        for (i=0; i<3; i++) tab[i][1]*=n;
    }
    void operator += (Type n)
    {
        int i;
        for (i=0; i<3; i++) tab[i][2-i]+=n;
    }
};

int main()
{   srand(time(NULL));
    Matrica <short int> a,b,c;
    Matrica <int> x,y,z;
    a+=3;
    a.izpis();
    b*=3;
    b.izpis();
    c=a+b;
    c.izpis();
    x+=5;
    x.izpis();
    y*=5;
    y.izpis();
    z=x+y;
    z.izpis();
    Matrica <float> *kaz = new Matrica<float>();
    kaz->operator+=(5.26);
    kaz->izpis();
    delete kaz;
    return 0;
}
