#include <iostream>
#include <string>

using namespace std;

int main() {

    string beseda = "VEVERICA";
    string user_beseda = "";

    for(int i = 0; i < beseda.length(); i++){
        user_beseda = user_beseda + "_";
    }

    string porabljene_crke = "";
    char crka;

    int stevilo_poskusov = 7;

    while(stevilo_poskusov > 0) {

        cout << endl;
        cout << "user beseda: " << user_beseda << endl;
        
        cout << "Vnesi crko: ";
        cin >> crka;

        if(beseda.find(crka) == std::string::npos) {
                
            cout << "Te crke zal ni v besedi." << endl;
            porabljene_crke = porabljene_crke + crka;
            
            cout << "Do sedaj si porabil ze: " << porabljene_crke << endl;
            
            stevilo_poskusov = stevilo_poskusov - 1;
            cout << "Imas se: " << stevilo_poskusov << " poskusov" << endl;

        } else {
            
            cout << "Bravo, ta crka je v besedi. " << endl;
            cout << "Crka : " << crka << endl;

            // Zamenja vse pojavitve te crke v user_besedi
            for(int i = 0; i < beseda.length(); i++) {
                // Ce je crka enaka crki na i-tem indexu original besede
                
                if(beseda[i] == crka) {
                    // Jo zamenjaj s tapravo crko
                    // nasel si index, kjer bi mogla ta crka bit
                    user_beseda[i] = crka;
                }
            }
            // V primeru, da se celotna beseda popolnoma ujema z user_besedo
            if(beseda == user_beseda) {
                // Zakljuci while zanko
                break;
            }
        }
    }

    if(stevilo_poskusov > 0) {
        cout << "Bravo! Uspelo ti je uganit besedo" << endl;
        cout << "Imel si se " << stevilo_poskusov << " poskusov." << endl;
    } else {
        cout << "Ni ti uspelo uganiti besede." << endl;
        cout << "Beseda je bila: " << beseda << endl;
    }

    return 0;
}
