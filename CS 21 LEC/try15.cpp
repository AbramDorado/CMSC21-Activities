#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int syllablesln(string line){

    int vowels = 0;
    for (int i = 0; i < line.length() ; i++)
    {
        if ((line[i] == 'a') || (line[i] == 'e') || (line[i] == 'i') || (line[i] == 'o') || (line[i] == 'u') || (line[i] == 'y'))
        {
            vowels = vowels + 1;
            if ((line[i + 1] == 'a') || (line[i + 1] == 'e') || (line[i + 1] == 'i') || (line[i + 1] == 'o') || (line[i + 1] == 'u') || (line[i + 1] == 'y'))
            {
                vowels = vowels - 1;
            }
        }
    }
    if (line[line.length()-1] == 'e')
    {
        vowels --;
    }
    return vowels;
}

int main()
{
    string a,b,c;
    cout << "Enter the strings to be checked as haiku! \n";
    cout << "1st Line: ";
    getline(cin,a);
    a.erase(remove_if(a.begin(), a.end(), ::ispunct), a.end());
    int a_syllable = syllablesln(a);

    cout << "2nd Line: ";
    getline(cin,b);
    b.erase(remove_if(b.begin(), b.end(), ::ispunct), b.end());
    int b_syllable = syllablesln(b);

    cout << "3rd Line: ";
    getline(cin,c);
    c.erase(remove_if(c.begin(), c.end(), ::ispunct), c.end());
    int c_syllable = syllablesln(c);
    
    if ((a_syllable == 5) || (b_syllable == 7) || (c_syllable == 5))
    {
        cout << "The three-line poem is a HAIKU" << endl;
    }
    else 
    {
        cout << "Sorry, it is NOT a HAIKU" << endl;
    }
}