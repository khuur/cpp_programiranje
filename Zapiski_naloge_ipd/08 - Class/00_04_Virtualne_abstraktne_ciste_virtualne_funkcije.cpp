#include<iostream>

using namespace std;

class Base {
    int x;
    public:
        // Če ima virtual void XX() = 0; // to je čista virtualna funkcija
        // MORA biti override-ana v podedovanem Classu
		
        // Če ima class eno Čisto virtualno funkcijo, pomeni, da je abstrakten class.
        // Abstrakten class je pa tisti iz katerega se ne delajo objekti.
		
        // Če je neki deklariran v abstraktnem razredu, pomeni, da majo vsi njegovi izpeljani razredi te metode dostopne.
        // Namenjen je temu, da naredimo nove 'boljše' classe, ki imajo vse te lastnosti kot abstrakten.
        // Ne bo ti sploh pustil narest objekta, če ma tvoj class eno čisto virtualno funkcijo.
        
        // Razlika med abstraktnim in virtualnim funkcijam
        // Virtualne majo implmenentacijo in tud dovolijo, da izpeljani razredi override-ajo
        // Abstraktne metode pa nimajo implementacije in s tem PRISILIJO izpeljan razred, da override-a metodo.

        virtual void fun() = 0;
    int getX() {
        return x;
    }

    virtual void print();
};

// This class inherits from Base and implements fun()
class Derived: public Base {
    int y;
    public:
        void fun() {
            cout << "fun() called" << endl;
        }
        void print() {
            cout << "Jou iz derived" << endl;
        }
};

int main(void) {
    Derived d;
    d.fun();
    d.print();
    return 0;
}
