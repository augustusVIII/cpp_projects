#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

// Prototypes
string read_file();
string read_file_except_headlines();


int main()
{
	// TO-DO: Open the .fasta file and read it into a string
	string content = read_file();	
	
	// TO-DO: Open the .fasta file and read it into a string EXCEPT for the headlines
	string sequence = read_file_except_headlines();
	
	// Printing results
	cout << "With headline\n" << content << '\n' << '\n';
	cout << "Without headline\n" << sequence << '\n';
	

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

// Open the .fasta file and read it into a string EXCEPT for the headlines
string read_file_except_headlines()
{
	string temp; // To store the headlines
	string line;
	string result;
	
	ifstream input_file("sequences.fasta");
	
	if (input_file.is_open())
	{
		getline(input_file, temp);
		while (getline(input_file, line))
		{
			result += (line + '\n');
		}
		input_file.close();
	}
	
	return result;
}