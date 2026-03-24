# Project: FASTA File Processor

The FASTA file processor is a software designs to process FASTA files (lol).  

**FASTA files:**
- FASTA files are text-based files that stored nucleotide (DNA/RNA) or protein (amino acid)
sequences.  
- They end with ".fasta".  

**Features:**  
- File reading: Open a .fasta file, skip the header line (which starts with >),  
and read the multi-line sequence into a single string.   
- Reverse complement:  
	- Reverse the sequence: 3'-5' to 5'-3'.  
	- Complement the base: A-T, G-C.  
- Transcribe to RNA: Replace all 'T's with 'U's.  
- Export: Save the results into a new text file called results.txt.  
- The program won't runs all features. Instead, it will asks the user what they want.  

**What need to be used:**  
- fstream  
- fuctions  
- std::vector  
- pass-by-reference  

### Ideas scrap

How to solve the .fasta headline problem  
- Do like this  
```c++
#include <sstream>
#include <string>
string str;
if (file)
{
	std::stringstream buffer;
	buffer << file.rdbuf()
	str = buffer.str()
}
// After that, the whole content of the .fasta file will be stored inside str.
```
- After you get str, you need to iterate through the text, until it reach endline,
everytime it see a ">", it will plus 1 variable, which is used to store the content of
the dna/rna sequence.
- Then you find someway to store the dna/rna sequence into a variable. Then you can work 
on the problems.
- Using end of file (.eof) to stop the program when it reach the end of the .fasta file.

 


