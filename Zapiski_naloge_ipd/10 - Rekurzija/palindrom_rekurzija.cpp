#include <iostream>
#include <string>

using namespace std;

int palindrom(string niz, int a, int dolzina)
{
    char p=niz.at(a),d=niz.at(dolzina-1);
    if(dolzina-a<1)
        return 1;
    else if(p == d)
    {
        return palindrom(niz,a+1,dolzina-1);
    }
    else return -1;
}

int main()
{
    string niz="osemopitihhitipomeso";
    int a=0, dolzina=niz.size();
    cout << palindrom(niz,a,dolzina) << endl;
    return 0;
}
