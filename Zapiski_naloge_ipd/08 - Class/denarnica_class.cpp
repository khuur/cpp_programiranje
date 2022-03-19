#include <iostream>

using namespace std;

class Denarnica {
    int bogastvo;
    public:
        Denarnica() {
            cout << "vpisi stanje" << endl;
            cin >> bogastvo;
        }
    int dvig(int st);
    void polog(int st);
    void stanje() {
        cout << bogastvo;
    };
};

void Denarnica::polog(int st) {
    bogastvo += st;
}

int Denarnica::dvig(int st) {
    bogastvo -= st;
    return bogastvo;
}

int main() {
    Denarnica tosl;
    tosl.dvig(60);
    tosl.polog(75);
    tosl.stanje();
    return 0;
}