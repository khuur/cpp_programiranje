#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Element {
    int data;
    Element *next, *prev;
} *start = NULL, *endd = NULL;

// inserting
void push(int n) {

    Element *new_element = new Element;
    new_element -> data = n;

    if(start == NULL && endd == NULL){
        new_element -> next = NULL;
        new_element -> prev = NULL;
        start = new_element;
        endd = new_element;
        return;
    }

    new_element -> next = start;
    new_element -> prev = NULL;
    start -> prev = new_element;
    start = new_element;
}
void print() {
    if(start == NULL){
        return;
    }
    Element *tmp = start;
    cout << "------------ PRINT ALL ------------" << endl;
    while(tmp != NULL) {

        cout << tmp -> data << endl;
        tmp = tmp -> next;
    }
    cout << "------------ /PRINT ALL ------------" << endl;
}

void makeItCircle() {

    endd -> next = start;
    start -> prev = endd;
}

void removeAllSameNumberFromList(int n) {

    Element *tmp = start;

    while(tmp != NULL){

        if(tmp -> data == n) {
            // izbrisi me vn

            Element *delete_me = tmp;

            delete_me -> prev -> next = delete_me -> next;
            delete_me -> next -> prev = delete_me -> prev;

            tmp = delete_me -> next;
            delete delete_me;

        } else {
            tmp = tmp -> next;
        }
    }

}


int prestejElemente() {

    Element *tmp = start;

    int n = 0;
    while(tmp != NULL) {
        n++;
        tmp = tmp -> next;
    }

    return n;
}


void dodajZadnjemuDeluSeznam(int a, int b) {

    Element *tmp = endd;

    int n = prestejElemente();

    int stevilo_povecanih_elementov = ceil(n / 2.0);

    for(int i = 0; i < stevilo_povecanih_elementov; i++) {
        int random_gn = rand() % (b - a + 1) + a;
        tmp -> data += random_gn;
        tmp = tmp ->prev;
    }
}


int main() {


    srand (time(NULL));
    for(int i = 1; i < 11; i++) {
        push(i * 7);
        push(i * 4);
    }
    push(23);

    print();

    int a = 1000;
    int b = 3000;

    dodajZadnjemuDeluSeznam(a, b);

    print();

    return 0;
}
