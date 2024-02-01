#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

double dobi_pi() {

    cout << "Evo me v funkciji" << endl;

    return 3.14;
}

double dobi_minimalno_postavko() {

    cout << "Evo me v funkciji dobi_minimalno_postavko" << endl;

    return 6;
}

string pretvori_datum(string input_date) {

    cout << "input_date: " << input_date << endl;

    string year = input_date.substr(0,4);
    string month = input_date.substr(5,2);
    string day = input_date.substr(8,2);

    cout << "year" << year << endl;
    cout << "month" << month << endl;
    cout << "day" << day << endl;

    string output_date = "";

    int int_day = stoi(day);
    string day_without_zeros = to_string(int_day);

    output_date.append(day_without_zeros);
    output_date.append(". ");

    int int_month = stoi(month);
    string month_without_zeros = to_string(int_month);

    output_date.append(month_without_zeros);
    output_date.append(". ");

    output_date.append(year);


    // 2024-02-01 => 1. 2. 2024
    return output_date;
}

 // "1. 2. 2024" => "2024-02-01"


int main() {
    srand (time(NULL));


    int x = rand() % 100;
    cout << "x: " << x << endl;

    return 0;

/*
    double pi = 3.14;

    double pi_iz_funkcije = dobi_pi();

    cout << "pi: " << pi << endl;
    cout << "pi_iz_funkcije: " << pi_iz_funkcije << endl;


    double min_postavka = dobi_minimalno_postavko();

    int stevilo_oddelanih_ur = int(8.7);

    cout << "stevilo_oddelanih_ur = " << stevilo_oddelanih_ur << endl;

    double zasluzek = min_postavka * stevilo_oddelanih_ur;

    cout << "Danes si zasluzila: " << zasluzek << endl;

    cout << abs(-2) << endl;

    string stevilka = "12";

    int int_stevilka = stoi(stevilka);
    int_stevilka++;

    cout << "stevilka: " << stevilka << endl;
    cout << "int_stevilka: " << int_stevilka << endl;

    string nova_stevilka = to_string(651165);
    cout << "nova_stevilka: " << nova_stevilka << endl;

    nova_stevilka.append("abc");

    cout << "nova_stevilka: " << nova_stevilka << endl;
*/

    string date = "2024-02-01";

    string formatted_date = pretvori_datum(date);

    cout << "formatted_date : " << formatted_date;
    
    
    
    string date2 = "2024-12-01";

    string formatted_date_2 = pretvori_datum(date2);
    
    
    
    return 0;
}
