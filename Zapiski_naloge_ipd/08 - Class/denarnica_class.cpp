#include <iostream>
using namespace std;

class Denarnica{
    public:
        int denar;

    Denarnica() {
        denar = 20;
    }
    void vpis(){
        cout<<"vpisi kolicino denarja"<<endl;
        cin>>denar;
    }
    void izpis(){
        cout<<denar<<" toliko denarja je notri"<<endl;
    }
    void dodajanje(int n){
        denar += n;
    }
    void jemanje(int m){
        denar -= m;
    }

    void operator + (int x){
        denar += x;
    }

    // ++denar;
    void operator ++() {
        denar += 321;
    }

    // denar++;
    void operator ++(int) {
        denar += 123;
    }
};

int main() {
    Denarnica stanje;
    stanje.dodajanje(10);
    stanje.dodajanje(10);
    stanje.dodajanje(10);
    stanje.izpis();

    stanje + 39;

    stanje.izpis();

    stanje++;
    stanje.izpis();

    ++stanje;
    stanje.izpis();

    return 0;
}
