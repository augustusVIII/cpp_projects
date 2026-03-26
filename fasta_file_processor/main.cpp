#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

// Prototypes
string read_file();
int headlines_count(string text);

int main()
{
	// TO-DO: Open the .fasta file and read it into a string
	string content = read_file();
	
	// TO-DO: Iterate throught the whole text to count how many headlines are there
	int headlines = headlines_count(content);
	
	cout << content << '\n';
	cout << "Number of headlines: " << headlines << '\n';
	
	return 0;
}

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

int headlines_count(string text)
{
	int n = 0;
	
	for (int i = 0; i < text.length(); i++)
	{
		// > is the beginning of a .fasta file header.
		if (text[i] == '>')
		{
			n += 1;
		}
	}
	
	return n;
}
