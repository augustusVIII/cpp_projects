#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

int main()
{
	// TO-DO: Open the .fasta file and read it into a string
	string sequence;
	ifstream in_file("sequences.fasta");
	
	while (in_file.is_open())
	{
		char current = in_file.get();
		
		
	}
	
	
	in_file >> sequence;
	cout << sequence << endl;
	
	return 0;
}
