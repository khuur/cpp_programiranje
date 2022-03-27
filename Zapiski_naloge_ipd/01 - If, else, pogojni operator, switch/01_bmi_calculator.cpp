#include <iostream>

using namespace std;

int main() {

	float visina = 1.90;
	float teza = 900;

	float bmi = teza / (visina * visina);

	if(bmi > 25){
		cout << "predebeli ste" << endl;
	} else if (bmi < 17) {
		cout << "presuhi ste" << endl;
	} else{
		cout << "you are okay" << endl;
	}

	return 0;

}
