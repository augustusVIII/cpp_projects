#include <iostream>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string text;
    ifstream in_file("rosalind_dna.txt");
    in_file >> text;
    in_file.close();

    int length = text.length();
    int a, t, g, c;
    a = t = g = c = 0;

    for (int i = 0; i < length; i++)
    {
        text[i] = tolower(text[i]);
        switch(text[i])
        {
            case 'a': a++; break;
            case 't': t++; break;
            case 'g': g++; break;
            case 'c': c++; break;
        }
    }

    cout << a << ' ' << t << ' ' << g << ' ' << c;

    return 0;
}
