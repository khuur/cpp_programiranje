#include <iostream>
using namespace std;

void binarno(int n)
{
	if(n > 1)
		binarno(n/2);
		cout << n%2;	
}

int main()
{
	int a = 17;
	binarno(a);	
	
	return 0;
}
