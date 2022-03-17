#include <iostream>
using namespace std;

int collatz(int n)
{
	cout << n << "\t";
	if(n != 1)
	{
		if(n % 2 == 0)
			collatz(n/2);
		else
			collatz(n*3 +1);
	}		
}

int main()
{
	collatz(13);	
	return 0;
}
