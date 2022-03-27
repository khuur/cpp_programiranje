#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand (time(NULL));

	// () = (zg - sp - 1)   + sp + 1
	// [) = (zg - sp)       + sp 
	// (] = (zg - sp)       + sp + 1
	// [] = (zg - sp + 1)   + sp 

	int x = rand()% (zg - sp - 1)   + sp + 1;
	
	cout << " x"
	
	return 0;
}
