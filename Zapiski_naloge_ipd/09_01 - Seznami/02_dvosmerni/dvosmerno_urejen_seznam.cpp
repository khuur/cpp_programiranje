#include <iostream>

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

void addToEnd(int n) {

    Element *new_element = new Element;
    new_element -> data = n;

    if(endd == NULL) {
        new_element -> next = NULL;
        new_element -> prev = NULL;
        start = new_element;
        endd = new_element;
        return;
    }

    new_element -> next = NULL;
    new_element -> prev = endd;
    endd -> next = new_element;
    endd = new_element;

}

void addAtIndex(int index, int n) {

    if (start == NULL || index == 0) {
        return push(n);
    }
    Element *new_element = new Element;
    new_element -> data = n;

    Element *tmp = start;

    for(int i = 0; i < index-1; i++) {
        tmp = tmp -> next;
    }

    new_element -> prev = tmp;
    new_element -> next = tmp -> next;
    tmp -> next = new_element;
    new_element -> next -> prev = new_element;


}

void addSorted(int n) {

    // ce je seznam prazen
    if(start == NULL) {
        return push(n);
    }

    if(n > start -> data) {
        return push(n);
    }

    if(n < endd -> data) {
        return addToEnd(n);
    }

    Element *new_element = new Element;
    new_element -> data = n;

    Element *tmp = start;

    while(tmp != NULL){

        if(tmp -> next -> data < n) {
            new_element -> next = tmp -> next;
            new_element -> prev = tmp;
            tmp -> next -> prev = new_element;
            tmp -> next = new_element;
            return;
        }

        tmp = tmp -> next;
    }

}

// removing
void pop() {
    if(start == NULL) {
        return;
    }

    Element *tmp = start;

    if(tmp->next == NULL){
        // last one standing
        Element *delete_me = tmp;
        start = NULL;
        endd = NULL;

        delete delete_me;
        return;
    }

    tmp->next->prev = NULL;
    start = tmp -> next;

    Element *delete_me = tmp;
    delete delete_me;

}

void removeAll(){
    while(start != NULL) {
        pop();
    }
}

void removeFromIndex(int index) {

    if(index == 0){
        return pop();
    }

    Element *tmp = start;

    for(int i = 0; i < index - 1; i++) {
        tmp = tmp -> next;
    }

    Element *delete_me = tmp -> next;

    delete_me -> next -> prev = tmp;
    tmp -> next = delete_me -> next;

    delete delete_me;

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
// printing
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

void printR(Element *element) {

    if(element == NULL){
        return;
    }
    printR(element->next);
    cout << element -> data << endl;

}


int main() {

    for(int i = 0; i < 10; i++) {
        addSorted((10 - i) * 7);
        addSorted((10 - i) * 4);
        addSorted(i * 8);
    }
    print();

    removeFromIndex(1);
    print();

    return 0;
}
