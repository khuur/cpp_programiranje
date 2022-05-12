#include <iostream>
#include <ctime>

using namespace std;
//1.c,d
//2.a
//3.d
//4.
/* Napišite celoten program v C++, ki bo deklariral razred Matrica, ki naj vsebuje privatno 2D tabelo dimenzije
3x3. Podatkovni tip tabele naj bo definiran kot generični podatkovni tip Type. V razredu implementirajte vse
preobložitve naslednjih spodaj podanih operatorjev. Začetno vrednost 2D tabeli dodeli konstruktor, tako da
napolni tabelo z naključnimi vrednostmi od -50 do 50 (interval [-50..50]), razredu pa dodajte še kopirni
konstruktor ter metodo za izpis vseh njegovih lastnosti.. Primeri delovanja preobloženih operatorjev, če tip
Type zamenjamo s kratkimi celimi števili:
*/

class Matrica {
    private:
        int tab[3][3];
    public:
        Matrica() {
            vnos();
        }
        Matrica(Matrica &matrica) {

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    tab[i][j] = matrica.tab[i][j];
                }
            }
        }

    void setValue(int tabela_value[][3]){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                 setCell(i, j, tabela_value[i][j]);

                 tab[i][j] = tabela_value[i][j];
            }
        }
    }

    void setCell(int i, int j, int value) {
        tab[i][j] = value;
    }

    int getCell(int i, int j){
        return tab[i][j];
    }



    void vnos() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                /*
                    // () = (zg - sp - 1)   + sp + 1
                    // [) = (zg - sp)       + sp
                    // (] = (zg - sp)       + sp + 1
                    // [] = (zg - sp + 1)   + sp
                */

                // [ -50 , 50 ] //  % 101
                tab[i][j] = rand() % 101 - 50;
            }
        }
    }
    void izpis() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << tab[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;
    }

    Matrica sestej(Matrica m2) {

        Matrica m3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                int value = getCell(i, j) + m2.getCell(i, j);

                m3.setCell(i, j, value);
            }
        }
        return m3;
    }

    Matrica operator+(Matrica m2) {

        Matrica m3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                int value = getCell(i, j) + m2.getCell(i, j);

                m3.setCell(i, j, value);
            }
        }
        return m3;
    }


    void operator * (int n) {

        for(int i = 0; i < 3; i++) {
            int value = getCell(i, 1) * n;
            setCell(i, 1, value);
        }
    }

    /*
    Matrica operator * (int n) {

        Matrica m;

        // Prepise vse vrednosti iz klicane matrike
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                m.setCell(i, j, getCell(i,j));
            }
        }

        // naredi množenje
        for(int i = 0; i < 3; i++) {
            int value = getCell(i, 1) * n;
            m.setCell(i, 1, value);
        }

        return m;
    }
    */
};

int main() {
    srand(time(NULL));

    Matrica m1;
    m1.izpis();

    //m1.tab[0][0] = 123;
    m1.setCell(0, 0, 123);


    m1.izpis();

    Matrica m2;
    m2.izpis();

    Matrica m3;
    m3 = m1.sestej(m2);
    m3.izpis();

    Matrica m4;

    m4 = m1 + m2;

    m4.izpis();

    cout << "-------------------" << endl;
    Matrica m5, m6;
    m5.izpis();
    // prvi operator
    // m5 * 3;

    // drugi operator
    //m6 = m5 * 3;
    m6.izpis();

    cout << "------KAZALCI--------" << endl;

    Matrica *kaz = new Matrica();
    kaz->izpis();
    kaz->operator*(7);
    kaz->izpis();
    delete kaz;

    return 0;
}
