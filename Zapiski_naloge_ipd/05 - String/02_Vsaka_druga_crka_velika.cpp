

#include <iostream>

using namespace std;

/**
8.	Naloga 18: Vsaka druga črka velika
Napišite funkcijo, ki bo vnešeno besedo oz. več besed (string) izpisala tako, da je vsaka druga črka
velika, ostale majhne.
*/


int main() {

    string besedilo = "besedil";


    // gremo skozi vse crke
    for(int i = 0; i < besedilo.length(); i++) {

        // ce je na sodem mestu
        if(i % 2 == 0){
            // naj bo velika crka
            besedilo[i] = toupper(besedilo[i]);
        } else {
            // ce je na lihem, naj bo mala crka
            besedilo[i] = tolower(besedilo[i]);
        }

    }
    cout << besedilo << endl;


    return 0;
}
