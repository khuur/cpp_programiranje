#include <iostream>
#include <fstream>

using namespace std;
// With ofstream you tell programm that you will OUTPUT something
ofstream my_output_file;

// With ifstream you tell programm that you get data INTO from some file
ifstream my_input_file;

// ofstream + ifstream == fstream
fstream my_inputoutput_file;


void writingNewTxtFile(string line)
{
	// With ofstream you tell programm that you will OUTPUT something
	// You should consider yourself as a programm, because you are OUTPUTing something to the file
	my_output_file.open("filename.txt"); 
	
	if(my_output_file.is_open())
	{
		// This is how you write something in the .txt file
		my_output_file << line;
		// When you call .close() you allow other programs to use this file as well.
		// .close() is automatically called in destructor.
		my_output_file.close();
	}
	else
	{
		cout << "I cannot open your file." << endl;
	}
}
void appendingTextToFile(string line)
{
	// With ofstream you tell programm that you will OUTPUT something
	// You should consider yourself as a programm, because you are OUTPUTing something to the file
	my_output_file.open("filename.txt", ios::app); 
	
	if(my_output_file.is_open())
	{
		// This is how you write something in the .txt file
		my_output_file << line;
		// When you call .close() you allow other programs to use this file as well.
		// .close() is automatically called in destructor.
		my_output_file.close();
	}
	else
	{
		cout << "I cannot open your file." << endl;
	}
}
void readingTxtFile()
{
	
	my_input_file.open("filename.txt"); 
	
	if(my_input_file.is_open())
	{
		string line; // Here i will store data from txt file	
		while(getline(my_input_file, line))
		{
			cout << line << endl;
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
int main()
{
	writingNewTxtFile("New line in new file\n");
	appendingTextToFile("Another line in same file\n");
	readingTxtFile();
		
	return 0;
}