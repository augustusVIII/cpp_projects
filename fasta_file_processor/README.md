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
- The program won't runs all features. Instead, it will ask the user what they want.  

**What need to use:**  
- fstream  
- fuctions  
- std::vector  
- pass-by-reference  


 


