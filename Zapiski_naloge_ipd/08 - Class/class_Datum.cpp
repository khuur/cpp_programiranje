#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Datum {
    int dan, mesec, leto;
    public:
        int do_konca_leta() {
            cout << 12 - mesec << "do konca leta je se: " << ((12 - mesec) * 30) + (30 - dan) << endl;;
            return (12 - mesec) * 30 + (30 - dan);
        };
    void do_danes();
    Datum() {
        srand(time(0));
        dan = rand() % 30 + 1;
        mesec = rand() % 12 + 1;
        leto = rand() % 2020 + 1;
        cout << dan << ". " << mesec << ". " << leto << endl;
    }
};

void Datum::do_danes() {
    int cas;
    time_t now = time(0);
    tm * pt = localtime( & now);
    int dan = pt -> tm_mday;
    int mesec = pt -> tm_mon;
    cas = mesec * 30 + dan;
    cas += (2020 - leto - 1) * 12 * 30 + do_konca_leta();
    cout << "do danasnjega dneva: " << dan << ". " << mesec << ". " << "2020 " << "manjka se: " << cas << " dni" << endl;
}

int main() {
    Datum prvi;
    prvi.do_konca_leta();
    prvi.do_danes();
    return 0;
}