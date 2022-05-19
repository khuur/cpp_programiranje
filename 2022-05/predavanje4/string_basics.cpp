#include <iostream>
#include <string>

using namespace std;

int main() {


    string ime = "kristjan";
    string priimek = "bleiweis";

    cout << "ime: " << ime << endl;
    cout << "priimek: " << priimek << endl;

    string polno_ime = ime + priimek;
    //string polno_ime = ime.append(priimek);

    cout << "polno ime : " << polno_ime << endl;


    cout << "ime : " << ime << endl;
    cout << "dolzina imena: " << ime.length() << endl;

    cout << "prva crka imena: " << ime[0] << endl;

    /*
    string user_input;

    cout << "vnesi svoj input: ";
    getline(cin, user_input);

    cout << "user input: " << user_input << endl;
    */

    ime[0] = toupper(ime[0]);
    ime[1] = tolower(ime[1]);


    cout << "ime: " << ime << endl;
    cout << "priimek: " << priimek << endl;


    cout << ime.find('a') << endl;

    string podniz = "ble";

    if(priimek.find(podniz) == std::string::npos) {
        cout << "Podniza nisem uspel najti" << endl;
    } else {
        cout << "Podniz '" << podniz << "' se nahaja na : " << priimek.find(podniz) << " indexu." << endl;
    }

    string datum = "2022-05-19";
    string leto = datum.substr(0,4);
    string mesec = datum.substr(5,2);
    string dan = datum.substr(8,2);

    cout << leto << endl;
    cout << mesec << endl;
    cout << dan << endl;

    return 0;
}
