#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float s1, s2, s3;

    cout << "Vpisi stranico 1: ";
    cin >> s1;

    cout << "Vpisi stranico 2: ";
    cin >> s2;

    cout << "Vpisi stranico 3: ";
    cin >> s3;

    float obseg = s1 + s2 + s3;
    float s = obseg / 2;

    float povrsina = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    cout << "Stranica 1: " << s1 << endl;
    cout << "Stranica 2: " << s2 << endl;
    cout << "Stranica 3: " << s3 << endl;
    cout << "Obseg: " << obseg << endl;
    cout << "Pol obsega: " << s << endl;

    cout << "Povrsina: " << povrsina << endl;




	return 0;
}
