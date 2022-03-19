#include <iostream>

#include <string.h>

using namespace std;
struct Element{
    int data;
    Element *next;
} *start = NULL;

// Inserting elements
void push(int n) {

    Element *new_element = new Element;
    new_element -> data = n;

    if(start == NULL) {
        // Pomeni, da smo na zacetku seznama
        new_element -> next = NULL;
        start = new_element;
    } else {
        new_element -> next = start;
        start = new_element;
    }
}

void addToEnd(int n){

    Element *new_element = new Element;
    new_element -> data = n;

    if(start == NULL) {
        // Pomeni, da smo na zacetku seznama
        new_element -> next = NULL;
        start = new_element;
    } else {
        // Pomeni, da seznam ni prazen
        Element *tmp = start;

        // se sprehodimo tako, da tmp kaze na zadnji element
        while(tmp -> next != NULL) {
            tmp = tmp -> next;
        }
        // tmp naj sedaj kaze na nov element
        tmp -> next = new_element;
        // nov element pa naj kaze na null, saj je zadnji
        new_element -> next = NULL;
    }

}

void addAtIndex(int index, int n){

    Element *new_element = new Element;
    new_element -> data = n;

    if(index == 0) {
        push(n);
    } else {
        Element *tmp = start;
        for(int i = 0; i < index-1; i++) {

            tmp = tmp -> next;
        }
        //cout << tmp -> data << endl;

        new_element -> next = tmp -> next;
        tmp -> next = new_element;

    }
}

void addSorted(int n) {

    Element *new_element = new Element;
    new_element -> data = n;


    if(start == NULL){
        // seznam je prazen
        start = new_element;
        new_element -> next = NULL;
        return;
    }

    // seznam ni prazen
    if(new_element -> data < start -> data) {
        // ce je element manjsi od najmanjsega elementa
        // ga dodaj na zacetek
        push(n);
        return;
    }

    Element *tmp = start;

    while(tmp -> next != NULL) {

        if(tmp -> next -> data > new_element -> data) {
            new_element -> next = tmp -> next;
            tmp -> next = new_element;
            return;
        }
        tmp = tmp -> next;
    }

    addToEnd(n);
    return;
}

// Printing elements
void printAll() {
    Element *tmp = start;
    cout << "-------- PRINT ALL ----------" << endl;
    while(tmp != NULL) {
        cout << tmp -> data << endl;
        tmp = tmp -> next;
    }
    cout << "-------- /PRINT ALL ----------" << endl;
}

void printReverse(Element *element){

    if(element == NULL){
        return;
    }
    printReverse(element->next);
    cout << element->data << endl;
}

void printAtIndex(int index) {

    cout << "-------- PRINT AT INDEX [" << index << "] ----------" << endl;

    if(index == 0) {
        cout << start -> data << endl;
    } else {

        Element *tmp = start;

        for(int i = 0; i < index; i++) {
            tmp = tmp -> next;
        }

        cout << tmp -> data << endl;
    }

    cout << "-------- /PRINT AT INDEX [" << index << "] ----------" << endl;
}

// Removing elements
void pop() {
    if(start == NULL) {
        return;
    }
    Element *delete_me = start;
    start = delete_me -> next;
    delete delete_me;
}

void deleteAll() {
    while(start != NULL){
        pop();
    }
}

void deleteFromIndex(int index) {

    if(start == NULL){
        return;
    }

    if(index == 0) {
        pop();
    } else {

        Element *tmp = start;

        for(int i = 0; i < index-1; i++) {
            tmp = tmp -> next;
        }
        Element *delete_me = tmp -> next;
        tmp -> next = delete_me -> next;
        delete delete_me;
    }

}

void deleteFromEnd() {

    if(start == NULL){
        // seznam je prazen, tko da ne morm brisat
        return;
    }

    if(start -> next == NULL) {
        // pomeni, da je notr samo en element
        pop();
        return;
    }

    Element *tmp = start;

    while (tmp -> next -> next != NULL) {
        tmp = tmp -> next;
    }
    Element *delete_me = tmp -> next;

    tmp -> next = NULL;
    delete delete_me;
}

void deleteValues(int n){

    // to make sure that list is not empty
    if(start == NULL) {
        return;
    }
    // da pobrišem začetek seznama, če so take vrednosti notr
    while(start -> data == n) {
        pop();
    }

    Element *tmp = start;
    while(tmp -> next != NULL) {

        if(tmp -> next -> data == n) {

            // če smo na koncu, da izbriše iz konca
            if(tmp -> next -> next == NULL) {
                deleteFromEnd();
                return;
            }

            Element *delete_me = tmp -> next;
            tmp -> next = delete_me -> next;

            tmp = delete_me -> next;
            delete delete_me;
            continue;
        }

        tmp = tmp -> next;
    }
    return;
}


int main(int argc, char * argv[]) {


    for(int i = 0; i < 10; i++){
        addSorted(i * 7);
    }

    for(int i = 1; i < 10; i++){
        addSorted(i * 4);
    }

    addSorted(0);
    addSorted(0);
    addAtIndex(7, 0);
    addToEnd(0);
    addSorted(0);

    printAll();
    deleteValues(0);
    printAll();

    return 0;
}
