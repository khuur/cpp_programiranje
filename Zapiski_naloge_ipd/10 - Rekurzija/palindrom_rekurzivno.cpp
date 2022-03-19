#include<iostream>
#include<string.h>

using namespace std;

bool alijepalindrom(string niz) {

    if(niz.length() == 0 || niz.length() == 1){
        return true;
    }

    // veva, da je niz dolg vsaj 2

    if(niz[0] != niz[niz.length() -1]) {
        return false;
    } else {
        string podniz = niz.substr(1, niz.length() -2);
        bool podniz_je_palindrom = alijepalindrom(podniz);
        return podniz_je_palindrom;
    }

}

int main(){

    if(alijepalindrom("osemopitihhitipomeso")) {
        cout << "je palindrom";
    } else {
        cout << "ni palindrom";
    }


    return 0;
}
