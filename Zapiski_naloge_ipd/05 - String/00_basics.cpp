#include<iostream>
#include <string>>


using namespace std;

int main() {

    string niz = "abc";

    cout << niz << endl;

    string ime = "Kristjan";
    string priimek = "Bleiweis";

    string polno_ime = ime + priimek;

    // polno_ime = ime.append(priimek);

    cout << polno_ime << endl;


    string x = "10";
    string y = "20";

    string z = x + y;

    cout << "x + y = " << z << endl;

    cout << "niz " << polno_ime << " ima " << polno_ime.length() << " znakov."  << endl;

    // .length() === .size()


    cout << "prva crka polnega imena je : " << polno_ime[0] << endl;


    //cout << "Vpisi svoje ime in priimek locen s presledkom" << endl;

    string user_input = "";

	// razlika je v tem, da cin ti prebere samo prvo besedo (oz. do prvega predsledka)
    // cin >> user_input;
    // getline(cin, user_input);

    cout << "User input: " << user_input << endl;

    niz = "benjamin";
    cout << niz << endl;

	niz[0] = toupper(niz[0]);

    cout << niz << endl;

    cout << niz.find('K') << endl;
	
	// V primeru, da ne najde crke, bi mogu vrnt -1, ampak C++ vrne  mal drugač
	// Spodnji primer prikazuje string, ki ga ni v mojem priimku, tko da nam izpiše "1", ker je RES, da je to enako npos-u aka -1
	cout << (priimek.find("Blexx")  == std::string::npos) << endl;
    



	string datum = "2022-03-30";
    string leto = datum.substr(0,4);
    string mesec = datum.substr(5,2);
    string dan = datum.substr(8,2);

    cout << leto << endl;
    cout << mesec << endl;
    cout << dan << endl;

    return 0;
}
