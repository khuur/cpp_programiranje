#include <iostream>

#include <string.h>

using namespace std;

class Udll {

    public:

        int count;
    Udll() {
        count = 0;
    }
    struct element {
        int data;
        int index;
        struct element * prev, * next;
    }* start, * end;

    void init(int data) {
        element * tmp = new element;

    }
    void push(int data) {
        element * tmp = new element;

        if (count == 0) {
            tmp -> data = data;
            tmp -> next = NULL;
            tmp -> prev = NULL;
            start = tmp;
            end = tmp;
        } else {
            tmp -> data = data;
            start -> prev = tmp;
            tmp -> next = start;
            start = tmp;
            tmp -> prev = NULL;
        }
        tmp -> index = count;
        count++;
    }

    void print(int n) {

        element * x = new element;
        x = start;
        for (int i = 0; i < n; i++) {
            x = x -> next;
        }
        cout << x -> data;
    }

    void pop() {
        element * tmp = new element;
        tmp = start;
        start -> next -> prev = NULL;
        start = start -> next;
        delete tmp;
        count--;
    }
    void delete_from_end() {
        element * tmp = new element;

        tmp = end;
        end -> prev -> next = NULL;
        end = end -> prev;
        delete tmp;
        count--;
    }
    void delete_one(int n) {

        if (n == 1)
            delete_from_end();
        else if (n == count)
            pop();
        else {
            element * tmp = new element;
            tmp = end;

            for (int i = 0; i < n - 1; i++)
                tmp = tmp -> prev;

            if (tmp == start) { // smo na zadnjem elementu
                tmp -> prev -> next = NULL;
                start = tmp -> next;
            } else { // smo nekje vmes
                tmp -> prev -> next = tmp -> next;
                tmp -> next -> prev = tmp -> prev;
            }
            delete tmp;
            count--;
        }
    }

    void od_start_proti_end() {
        element * tmp = new element;
        tmp = start;
        string izpis_sodih = "";
        string izpis_lihih = "";
        for (int i = count; i > 0; i--) {
            if (tmp -> index % 2 == 0)
                izpis_sodih += to_string(tmp -> data);
            else
                izpis_lihih += to_string(tmp -> data);
            tmp = tmp -> next;
        }
        cout << izpis_sodih << endl;
        cout << izpis_lihih << endl;
    }

    void od_end_proti_start() {
        element * tmp = new element;
        tmp = end;
        string izpis_sodih = "";
        string izpis_lihih = "";
        for (int i = 0; i < count; i++) {
            if (tmp -> index % 2 == 0)
                izpis_sodih += to_string(tmp -> data);
            else
                izpis_lihih += to_string(tmp -> data);
            tmp = tmp -> prev;
        }
        cout << izpis_sodih << endl;
        cout << izpis_lihih << endl;
    }

};

int main(int argc, char * argv[]) {

 
    Udll x;

    for (int i = 0; i < 9; i++)
        x.push(i + 1);

    x.od_start_proti_end();
    x.od_end_proti_start();

    for (int i = 0; i < x.count; i++)
        x.print(i);

    cout << endl << "Hello World!" << endl;
    return 0;
}