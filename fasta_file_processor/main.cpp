#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

// Prototypes
string read_file();


int main()
{
	// TO-DO: Open the .fasta file and read it into a string
	string content = read_file();	
	cout << content << '\n';

	return 0;
}

// Open the .fasta file and read it into a string
string read_file()
{
	string result;
	
	ifstream input_file("sequences.fasta");
	
	if (input_file.is_open())
	{
		stringstream buffer;
		buffer << input_file.rdbuf();
		result = buffer.str();
		input_file.close();
	}

	return result;
}

