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
string ask_user();
void read_to_txt(string content);

int main()
{	
	// TO-DO: Ask the user for what they want
	string result = ask_user();
	
	// TO-DO: Read the result to a text-file
	read_to_txt(result);

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

// Ask the user for what they want
string ask_user()
{
	cout << "What feature do you want? " << '\n';
	cout << "Read the original sequence (type '1')" << '\n';
	cout << "Reverse complement the original sequence (type '2')" << '\n';
	cout << "Transcribe the original sequence to RNA (type '3')" << '\n';

	int input;
	cin >> input;
	
	string sequence = read_file_except_headlines();	
	if (input == 1)
	{
		cout << sequence << '\n';
		cout << "You can also view the result in result.txt" << '\n';
		return sequence;
	}
	else if (input == 2)
	{
		string reversed_sequence = reverse(sequence);
		string complemented_sequence = complement(reversed_sequence);
		cout << complemented_sequence << '\n';
		cout << "You can also view the result in result.txt" << '\n';
		return complemented_sequence;
	}
	else if (input == 3)
	{
		string RNA = to_RNA(sequence);
		cout << RNA << '\n';
		cout << "You can also view the result in result.txt" << '\n';
		return RNA;
	}
	else
	{
		cout << "Input not accepted, please try again" << '\n';
		cout << "You can also view the result in result.txt" << '\n';
		return "";
	}
	
	// To avoid non-void function error
	return "";
}

// Read the result to a text-file
void read_to_txt(string content)
{
	ofstream out_file("result.txt");
	out_file << content;
	out_file.close();
}