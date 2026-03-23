#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

int main()
{
	// write to a file
	string test_input;
	cout << "Please input a random sequence: ";
	cin >> test_input;
	
	ofstream out_file("result.txt");
	out_file << test_input;
	out_file.close();
	
	// read from a file
	string test_output;
	ifstream in_file("result.txt");
	in_file >> test_output;
	cout << test_output << endl;
	in_file.close();
	
	return 0;
}
