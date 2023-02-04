#include <iostream>
#include <string>

using namespace std;

int main() {

    string ime = "KrIstJaN";
    string priimek = "Bleiweis";

    cout << "ime: " << ime << endl;

    // cout << "Vpisi novo ime: ";
    // getline(cin, ime);

    // ime[0] = 'F';
    // float koren = sqrt(3);
    ime[0] = toupper(ime[0]);

    for(int i = 1; i < ime.length(); i++){
        ime[i] = tolower(ime[i]);
    }



    cout << "Ti si: " << ime  << " " << priimek << endl;


    string celotno_ime = ime + " " + priimek;

    cout << "Tvoje celotno ime je: " << celotno_ime << endl;

    string a = "10";
    string b = "20";

    string c = a + b;

    cout << "c: " << c << endl;

    cout << celotno_ime.length() << endl;


    // cout << "u se nahaja na: " << ime.find('u') << endl;

    // bool ali_sem_nasel_u = false;


    // ali_sem_nasel_u = ime.find("u") == std::string::npos;


    string prva_polovica_imena = ime.substr(0,4);

    cout << "Prva polovica je: " << prva_polovica_imena << endl;


    string datum_ISO_format = "2022-12-07";

    string leto = datum_ISO_format.substr(0,4);
    string mesec = datum_ISO_format.substr(5,2);
    string dan = datum_ISO_format.substr(8,2);

    string human_friendly_datum = dan + ". " + mesec  + ". " + leto;

    cout << "Danes smo: " << human_friendly_datum << endl;




    return 0;
}
