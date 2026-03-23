#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

int main()
{
	string test_input;
	cout << "Please input a random sequence: ";
	cin >> test_input;
	
	ofstream file("result.txt");
	file << test_input;
	file.close();
	
	return 0;
}
