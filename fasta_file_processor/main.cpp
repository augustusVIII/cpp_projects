#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

// Prototypes
string read_file();
int headlines_count(string text);
int lines_counter(string content);


int main()
{
	// TO-DO: Open the .fasta file and read it into a string
	string content = read_file();
	
	// TO-DO: Iterate through the whole text to count how many headlines are there
	int headlines = headlines_count(content);
	
	// TO-DO: Figuring out how many lines are there
	int lines = lines_counter(content);
	
	// TO-DO: Iterate through the whole text and save the content without the headlines
	// to a string
	
	cout << content << '\n';
	cout << "Number of headlines: " << headlines << '\n';
	cout << "Number of lines: " << lines << '\n';
	
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

// Iterate through the whole text to count how many headlines are there
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

// Figuring out how many lines are there
int lines_counter(string content)
{
	int n = 0;
	
	for (int i = 0; i < content.length(); i++)
	{
		if (content[i] == '\n')
		{
			n += 1;
		}
	}
	
	// Plus 1 because the last line doesn't have a '\n'
	return (n + 1);
}