#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

// Prototypes
void read_file();

int main()
{
	// TO-DO: Open the .fasta file and read it into a string
	read_file();
	
	return 0;
}

void read_file()
{
	string content;
	
	ifstream input_file("sequences.fasta");
	
	if (input_file.is_open())
	{
		stringstream buffer;
		buffer << input_file.rdbuf();
		content = buffer.str();
	}
	
	cout << content << "\n";
	
	input_file.close();
}
