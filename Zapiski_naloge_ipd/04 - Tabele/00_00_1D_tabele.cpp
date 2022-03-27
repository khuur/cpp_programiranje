#include <iostream>

using namespace std;

int main() {
    
	int tab[10];	
	int prastevila[5] = {2, 3, 5, 7, 11};
	
	for(int i = 0; i < 10; i++){
		tab[i] = i * 7;
	}
	
	cout << tab[7] << endl;

    return 0;
}