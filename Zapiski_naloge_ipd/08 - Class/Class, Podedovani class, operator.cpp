#include <iostream>

using namespace std;

class Bazni
{
	protected:
		int a;
	public:
		virtual void vpis()=0;
		virtual void izpis()=0;
};
class Izpeljani : public Bazni
{
    string ime;
	public:
		void vpis();
		void izpis();
		void operator==(Izpeljani i);
		
};
void Izpeljani::vpis()
{
    cin>>ime;
    cin>>a;
}
void Izpeljani::izpis()
{
    cout << "ime: " << ime << endl;
    cout << "stevilka: " << a;
}
void Izpeljani::operator==(Izpeljani i)
{
    if(ime == i.ime)
    {
        cout << "enako ime" << endl;
    }
}
int main()
{
    Izpeljani a,b,c,d,e;
    a.vpis();
    a.izpis();
    b.vpis();
    b.izpis();
    c.vpis();
    c.izpis();
    d.vpis();
    d.izpis();
    e.vpis();
    e.izpis();
    a==b;
    b==c;
    c==d;
    d==e;
    return 0;
}
