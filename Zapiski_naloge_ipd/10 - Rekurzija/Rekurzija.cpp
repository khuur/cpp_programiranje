#include <iostream>
#include <string>
using namespace std;

int getFaculty(int n)
{	
	// ustavitveni pogoj
	if(n == 1)
		return 1;
	// klic rekurzije
	return n * getFaculty(n-1);
}
int suma(int n)
{
	if(n == 0)
		return 0;
	return n + suma(n-1);
}
bool palindrom(char tab[17], int left, int right)
{
	// ce smo sli cez sredino brez da bi opazili napako pomeni, da je to to
	if(left > right)
		return true;
	
	// poglej, ce sta prvi pa zadnji znak razlicna in ce sta	
	if(tab[left] != tab[right])
		return false; // pomeni, da NI palindrom
	else
		return palindrom(tab, left+1, right-1); // preveri še en nivo nižje
}
bool palindromString(string niz)
{
	int n = niz.length(); // da imam dolžino niza shranjeno v "n"-ju
	if(n <= 1)
		return true;
		
	// poglej, ce sta prvi pa zadnji znak razlicna in ce sta			
	if(niz.at(0) == niz.at(n-1))
		return palindromString(niz.substr(1,n-2));	// preveri še en nivo nižje	
	else
		return false; // pomeni, da NI palindrom
}

int main()
{
	cout << getFaculty(5) << endl;
	cout << suma(5) << endl;
	char tabela [17] = {'p', 'e', 'r', 'i', 'c', 'a', 'r', 'e', 'z', 'e', 'r', 'a', 'c', 'i', 'r', 'e', 'p'};
	cout << palindrom(tabela, 0, 16) << endl;
	cout << palindromString("pericarezeracirep") << endl;
	return 0;
}