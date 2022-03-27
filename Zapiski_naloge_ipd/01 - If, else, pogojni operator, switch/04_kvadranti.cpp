#include <iostream>


/**
* Program naj uporabnika vprasa po x in y koordinati tocke.
* Program naj uporabniku pove v katerem kvadrantu se tocka nahaja
*/

using namespace std;
int main() {

    int x;
    int y;
    
    cout << "Prosim vpisite x: ";
    cin >> x;
    
    cout << "Prosim vpisite y: ";
    cin >> y;
	
    if(x == 0 && y == 0) {
        cout << "Ste tocno v izhodiscu." << endl;
    }

    if(x > 0 && y > 0) {
        cout << "Ste v 1. kvadrantu." << endl;
    }
    
    
    if(x < 0 && y > 0) {
        cout << "Ste v 2. kvadrantu." << endl;
    }
    
    
    if(x < 0 && y < 0) {
        cout << "Ste v 3. kvadrantu." << endl;
    }
    
    
    if(x > 0 && y < 0) {
        cout << "Ste v 4. kvadrantu." << endl;
    }
    
    
    
    return 0;
}
