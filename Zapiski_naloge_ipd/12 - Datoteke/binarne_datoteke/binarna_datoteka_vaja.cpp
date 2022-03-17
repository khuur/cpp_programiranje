#include<iostream>
#include<fstream>
#include<string>
#include <string.h>
using namespace std;
struct Student
{
	int roll_no;
	char name [20];
};
int vnosStudentov()
{
	fstream wf("student.dat", ios::out | ios::binary);
	if(!wf.is_open())
	{
		cout << "Cannot open file!" << endl;
		return 1;
	}
	// Naredim tabelo studentov
	Student wstu[3];
	// in jim dam neke random podatke
	wstu[0].roll_no = 1;
	strcpy(wstu[0].name, "Rok");
	wstu[1].roll_no = 2;
	strcpy(wstu[1].name, "Benjamin");
	wstu[2].roll_no = 3;
	strcpy(wstu[2].name, "Mihael");
	// in pol jih zapišem v file
	for(int i = 0; i < 3; i++)
		wf.write((char *) &wstu[i], sizeof(Student));
	wf.close();
	if(!wf.good())
	{
		cout << "Error occurred at writing time!" << endl;
		return 1;
	}
}
void izpis()
{
	// 
	fstream wf("student.dat", ios::in | ios::binary);
	Student wstu;
	int i = 0;
	for(int i = 0; i < 3; i++)
	{
		wf.read((char *) &wstu, sizeof(Student));
		cout << wstu.name << endl;
	}
	
}

void premik()
{
	fstream file("student.dat", ios::in | ios::out | ios::binary);
	Student oseba;
	int i = 0;
	while(!file.eof()) // dokler nismo na koncu file-a
	{
		// pred branjem si zapomni kje si
		int position = file.tellg(); 
		// shrani podatke v 'oseba'
		file.read((char *) &oseba, sizeof(Student));
		// Ce se njeno ime zacne na crko 'R'
		if(oseba.name[0] == 'R')
		{
			// prepisi njeno ime z 'Kristjan'
			strcpy(oseba.name, "Kristjan");
			// postavi kazalec za pisanje na tocko preden smo prebrali
			file.seekp(position);
			// in prepisi kar je v osebi nazaj na tisto mesto
			file.write((char *) &oseba, sizeof(Student));
		}	
	}
	file.close();	
}
int main()
{

	vnosStudentov();
	izpis();
	premik();
	izpis();
	
	return 0;
}