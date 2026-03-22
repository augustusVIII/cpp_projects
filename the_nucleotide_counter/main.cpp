#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

/*
TODO: Refine the code as Gemini suggests.
*/

/*
	DNA Analyzer.
	Purpose: Analyze a given string of DNA.
	Features:
		Count the total occurrences of each nucleotide (A, T, G, C).
		Calculate the GC-content.
		Validate the input (e.g., if input 'Z', the program should flag an error).
	Test sequence: ATGCGTACGTTAGCCTAGGCGTAATCGCTAGCTAGCTAATGCGTACGTTAGCCTAGGCGTAATCGCTAGCTAGCTAATGCGTACGTTAGCCTAGGCGTAATCGCTAGCTAGCT
*/

int main()
{
	// user input the DNA sequence.
	string dna;
	cout << "Please input your DNA sequence: ";
	cin >> dna;
	
	// algorithm to validate the input. It iterate through the input string
	// and find if there's any wrong character.
	for (int i = 0; i < dna.length(); i++)
	{
		// implement universal-case (upper and lower) to the input
		dna[i] = toupper(dna[i]);
		if (dna[i] != 'A' && dna[i] != 'T' && dna[i] != 'G' && dna[i] != 'C')
		{
		cout << "Please input a valid dna sequence: A, T, G, C only." << endl;
		return 1;
		}
	}

	// algorithm to count how many times each nucleotide appears. It iterate
	// through the input string and +1 for each nucleotide it saw.
	int A = 0, T = 0, G = 0, C = 0;
	for (int i = 0; i < dna.length(); i++)
	{
		switch(dna[i])
		{
			case 'A': A++; break;
			case 'T': T++; break;
			case 'G': G++; break;
			case 'C': C++; break;
		}
	}
	cout << "The total occurrences of each nucleotide is:" << endl;
	cout << "A: " << A << endl;
	cout << "T: " << T << endl;
	cout << "G: " << G << endl;
	cout << "C: " << C << endl;
	
	// calculate the GC-content of the DNA: GC-content = (G + C) / (A + T + G + C)
	float gc_content = (G*1.0 + C) / (A + T + G + C) * 100;
	cout << fixed << setprecision(2) << gc_content << '%' << endl;
}


