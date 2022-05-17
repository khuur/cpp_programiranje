#include <iostream>
#include <cmath>

using namespace std;

int main() {


    int x = -20;
    int y = -10;

    if (x == 0 && y == 0) {
        cout << "Ste v izhodiscu" << endl;
    } else if (x > 0 && y > 0) {
        cout << "Ste v 1. kvadrantu" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Ste v 3. kvadrantu" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Ste v 4. kvadrantu" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Ste v 2. kvadrantu" << endl;
    } 
    
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
