#include <iostream>
#include <cmath>
using namespace std;

struct Element{
    int podatek;
    Element *next, *prev;
}*start = NULL, *endd = NULL;

void vnos_na_konec(int n) {

	Element *tmp = new Element;
    tmp->podatek = n;

    if (start == NULL && endd == NULL) {
        // ni drugih elementov v sezanmu
        tmp->next = NULL;
        tmp->prev = NULL;
        start = tmp;
        endd = tmp;
        return;
    }

    // ta element, ki ga zdej dodajamo naj kaže na do zdej zadnjega
    // torej tistega na katerega kaže endd
    tmp -> prev = endd;

     // naš tmp nima naslednjika, zato naj kaže na NULL
    tmp -> next = NULL;

    // zadnji element naj kaže na tega, ki ga dodajamo
    endd -> next = tmp;

    // ker je to zadnji element, naj endd kaže nanj
    endd = tmp;

}

void vnos_na_zacetek(int n){
    Element *tmp = new Element;
    tmp->podatek = n;

    if (start == NULL && endd == NULL) {
        tmp->next = NULL;
        tmp->prev = NULL;
        start = tmp;
        endd = tmp;
        return;
    }

    // trenutni element naj kaze na prvega v seznamu (torej na start)
    tmp -> next = start;

    // prvi element v seznamu naj kaže s prev na nas
    tmp -> next -> prev = tmp;

    // trenutno tmp nima predhodnika, zato naj kaže na NULL
    tmp -> prev = NULL;

    // ker je to zdej prvi elemnet naj start kaže nanj
    start = tmp;
}

bool vnos_na_x_mesto(int x, int n) {

    Element *novi = new Element;
    novi->podatek = n;

    if (start == NULL && endd == NULL) {
        if(x != 1) {
            return false;
        }
        novi->next = NULL;
        novi->prev = NULL;
        start = novi;
        endd = novi;
        return true;
    }
    if(x == 0) {
        vnos_na_zacetek(n);
    }

    int i = 1;

    Element *tmp = start;

    while(tmp != NULL){

        if(x == i) {
            novi -> next = tmp -> next;
            novi -> prev = tmp;
            tmp -> next -> prev = novi;
            tmp -> next = novi;
            break;
        }
        i++;
        tmp = tmp -> next;
    }

}


int prestej_elemente(){

    Element *tmp = start;

  	float i = 0;
    while(tmp != NULL) {
        i++;
      	tmp=tmp->next;
    }
    return i;
}

void pristej() {

    float n = prestej_elemente(); // 11

    n = ceil(n / 2); // 5.5 => ceil(5.5) == 6

    Element *tmp = endd;

    for(int i = 0; i < n; i++) {

        tmp -> podatek += 100;
      	tmp = tmp -> prev;
    }
}

void pristej2() {

    Element *from_start = start;
    Element *from_end = endd;

    while(true) {

        if(from_start -> next == from_end){
            // pomeni, da je to sredinski par
            from_end -> podatek += 100;
            break;
        }


        if(from_start == from_end) {
            // pomeni, da si točno na sredinskem elementu
            from_end -> podatek += 100;
            break;
        }

        from_end -> podatek += 100;

        from_start = from_start -> next;
        from_end = from_end -> prev;
    }




}


void print() {

    Element *tmp = start;
    while(tmp != NULL) {
        cout << tmp->podatek << endl;
        tmp = tmp-> next;
    }
}
int main()
{

    for(int i = 0; i < 10; i++){
        vnos_na_zacetek(i);
    }
    vnos_na_x_mesto(2, 555);
    print();
    cout << "Imamo " << prestej_elemente() << " elementov " << endl;
    pristej2();
    print();

    return 0;
}
