#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
   cout<< "vnesi 1. stevilo"<<endl;
   cin >> a;
   cout << "vnesi 2. stevilo"<<endl;
   cin >> b;
   cout << "katero operacijo zelis? Na izbiro imas +(1),-(2),*(3),D(4),M(5)"<<endl;
   cin >> c;
   switch (c)
   {
   case '+': cout << "sestevek je "<<a+b<<endl;break;
   case '-': cout << "razlika je "<<a-b<<endl;break;
   case '*': cout << "zmnozek je "<<a*b<<endl;break;
   case 'D': cout << "kolicnik je "<<a/b<<endl;break;
   case 'M': cout << "ostanek je "<<a%b<<endl;break;
}
    return 0;
}

