#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>
#include <algorithm>

using namespace std;

// Prototypes
string read_file();
string read_file_except_headlines();
string reverse(string sequence);
string complement(string sequence);
string to_RNA(string sequence);

int main()
{
	// TO-DO: Open the .fasta file and read it into a string
	string content = read_file();	
	
	// TO-DO: Open the .fasta file and read it into a string EXCEPT for the headlines
	string sequence = read_file_except_headlines();
	
	// TO-DO: Reverse complement: Reverse
	string reversed_sequence = reverse(sequence);
	
	//TO-DO: Reverse complement: Complement
	string complemented_sequence = complement(reversed_sequence);
	
	// TO-DO: Transcribe to RNA (of the original sequence)
	string RNA = to_RNA(sequence);
	
	// Printing results
	cout << "With headline\n" << content << '\n' << '\n';
	cout << "Without headline\n" << sequence << '\n';
	cout << "Reverse of the sequence" << reversed_sequence << '\n';
	cout << '\n' << "Complement of the reversed sequence" << complemented_sequence << '\n';
	cout << '\n' << "Transcribe the original sequence to RNA\n" << RNA << '\n';
	
	

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

// Reverse complement: Reverse
string reverse(string sequence)
{
	int length = sequence.length();
	for (int i = 0; i < length/2; i++)
	{
		// Swap the 2 opposing character in the string
		swap(sequence[i], sequence[length - i - 1]);
	}
	
	return sequence;
}

// Reverse complement: Complement
string complement(string sequence)
{
	int length = sequence.length();
	for (int i = 0; i < length; i++)
	{
		// Uppercase all the letter
		sequence[i] = toupper(sequence[i]);
		
		// Complement
		switch(sequence[i])
		{
			case 'A': sequence[i] = 'T'; break;
			case 'T': sequence[i] = 'A'; break;
			case 'G': sequence[i] = 'C'; break;
			case 'C': sequence[i] = 'G'; break;
		}
	}
	
	return sequence;
}

// Transcribe to RNA
string to_RNA(string sequence)
{
	int length = sequence.length();
	for (int i = 0; i < length; i++)
	{
		sequence[i] = toupper(sequence[i]);
		switch(sequence[i])
		{
			case 'T': sequence[i] = 'U'; break;
		}
	}
	
	return sequence;
}