#include <iostream>
#include <cmath>
using namespace std;
int main() {

    float s1, s2, s3;

    cout << "Prosim vpisi stranico 1: ";
    cin >> s1;

    cout << endl;

    cout << "Prosim vpisi stranico 2: ";
    cin >> s2;

    cout << endl;

    cout << "Prosim vpisi stranico 3: ";
    cin >> s3;

    float s = (s1 + s2 + s3) / 2;

    float area = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    cout << "Stranica 1: " << s1 << endl;
    cout << "Stranica 2: " << s2 << endl;
    cout << "Stranica 3: " << s3 << endl;
    cout << "Area: "<< area << endl;

    return 0;
}
