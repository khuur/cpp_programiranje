/*1.	NPCPP, ki bo
a.	S pomoejo funkcije nakljucna napolnil datoteko s 100 nakljuenimi malimi erkami angleške abecede,
 ter bo tako shranjeno datoteko shranil
b.	S pomocjo funkcije izbrisi izbrisal iz datoteke use crke, ki ne sodijo v slovensko abecedo izbrisal (prepisovanje)
c.	S pomoejo funkcije spremeni spremenil vse samoglasnike na datoteki v zvezdice s pomoejo funkcij za direktni dostop (kazalci)

2.	NPCPP, ki bo
a.	Omogoeil vnos podatkov o vozilu na binarno datoteko. Pri eemer hranimo: serijska stevilka, model, letnik, cena.
    Vnos na dat. Naj se konea takrat, ko uporabnik za serijsko stevilko vnese vrednost 0.
b.	S pomoejo funcije povpreeje izraeunal povpreeno starost vseh avtomobilov, katerih model Golf
c.	S pomoejo funkcije briši izbrisal vse tiste avtomobile, ki so starejši od 20 let. Pri brisanju zopet uporabite  direktni dostop
*/
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
using namespace std;
ofstream file;
fstream read_file;
ofstream new_file;
ifstream my_input_file;
string path;
void readingTxtFile(string filepath)
{
	my_input_file.open(filepath.c_str()); 	
	if(my_input_file.is_open())
	{
		string line; // Here i will store data from txt file	
		while(getline(my_input_file, line))
		{
			cout << endl << line << endl;
		}				
		// When you call .close() you allow other programs to use this file as well.
		// .close() is automatically called in destructor.
		my_input_file.close();
	}
	else
	{
		cout << "I cannot open your file." << endl;
	}
}
void fillTxtFile(string filepath)
{
	file.open(filepath.c_str());
	char crka = 'a';
	
	for(int i = 0; i < 100; i++)
	{
		int x = rand() % 25+65;
		crka = (char) x;
		//cout << crka << endl;
		file << crka; //) << crka;
	}
	file.close();
}
void onlySloveneCharacters(string filepath, string filepathnew)
{
	
	read_file.open(filepath.c_str(), ios::in);
	new_file.open(filepathnew.c_str(), ios::trunc);
	string line;
	while(getline(read_file, line))
	{
		cout << "line: " << line;
		for(int i = 0; i < 100; i++)
		{
			char x = line.at(i);
			//cout << x << endl;
			if(x == 'X' || x == 'Y' || x == 'W' || x == 'Q')
			{
				new_file << '_';
			}
			else
			{
				new_file << x;
			}
		}
		
	}
	read_file.close();
	new_file.close();
	
}
void removingCharactersWithPointers(string filepath, string filepathnew)
{
	string to_write = "";
	read_file.open(filepath.c_str(), ios::in);
	new_file.open(filepathnew.c_str(), ios::trunc);
	string line;
	while(getline(read_file, line))
	{
		cout << "line: " << line;
		
		
		for(int i = 0; i < 100; i++)
		{
			char x = line.at(i);
			//cout << x << endl;
			if(x == 'X' || x == 'Y' || x == 'W' || x == 'Q')
			{
				new_file << '_';
			}
			else
			{
				new_file << x;
			}
		}
		
	}
	read_file.close();
	new_file.close();
}
void izJevPa()
{
	string to_write = "";
	// datoteko odpremo za branje in pisanje
	file.open("burek.txt", ios::in | ios::out);
	// da mamo za shranjevat kar je v datoteki
	string line;
	// da mamo za lokacije pointerjev
	int pos = 0, next_pos = 0;
	// v line ti prebere eno vrstico iz file-a
	while(getline(read_file, line))
	{
		// si shraniš kje je ostal aka od kje more it naslednjic naprej brat
		next_pos = read_file.tellg(); // 27
		cout << "line: " << line << endl;
		
		// gremo character by character
		for(int i = 0; i < line.size()-1; i++)
		{	
			// v primeru, da se pojavi zaporedje crk "j" in "e"
			if(line.at(i) == 'j' && line.at(i+1) == 'e')
			{
				cout << "najdl smo 'je'" <<endl;
				// kazalec za pisanje nastavimo tja kjer se beseda 'je' zacne
				read_file.seekp(pos+i);
				// in ga prepisemo z "pa"
				read_file << "PA";					
			}			
		}
		// ko nehamo s spreminjanjem po tej vrstici
		// nastavimo pos na tisto vrednost, kjer je prej nehal
		pos = next_pos;
		// in na tisto vrednost nastavimo bralni kazalec
		read_file.seekg(pos);
	}
	read_file.close();
}
void fileWritingUsingPointers()
{
	
	fstream file("burek.txt", ios::out | ios::in | ios::trunc);
	if(!file.is_open())
	{
		cout << "error" << endl;
	}
	else
	{
		file << "burek je zakon!";
		
		cout<<file.tellp() << endl; // 15
		cout<<file.tellg() << endl; // 15
		
		file.seekp(9);
		
		cout<<file.tellp() << endl; // 9
		cout<<file.tellg() << endl; // 9
		
		cout << file.read(0, 5) << endl;
		file << "fuuuul zakon";
		
		file.seekg(6);
		string line;
		getline(file,line);
		cout << "line: " << line << endl;
		
	}
	file.close();
	
}
int main()
{
	srand(time(NULL));
	fillTxtFile("name.txt");
	onlySloveneCharacters("name.txt", "new_name.txt");
	readingTxtFile("name.txt");
	izJevPa();
	
	return 0;
}
