#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//implement the function fo haiku
//check for the syllables of a string based on vowels
int syllablesln(string line){
    int vowels = 0;
    for (int i = 0; i < line.length() ; i++){
        //add 1 to the variable if the line has a vowel and special cases letters
        if ((line[i] == 'a') || (line[i] == 'e') || (line[i] == 'i') || (line[i] == 'o') || (line[i] == 'u') || (line[i] == 'y')){
            vowels = vowels + 1;
            //if the next index is also a vowel and special cases letters, minus 1 
            if ((line[i + 1] == 'a') || (line[i + 1] == 'e') || (line[i + 1] == 'i') || (line[i + 1] == 'o') || (line[i + 1] == 'u') || (line[i + 1] == 'y'))
                vowels = vowels - 1;
        }
    }
    //decrement the variable is the last line has a letter e
    if (line[line.length()-1] == 'e')
        vowels --;

    return vowels;
}

int main()
{
    string first, second, third;
    cout << "Enter the strings to be validated as haiku \n";
    cout << "1st Line: ";
    getline(cin, first);
    //remove from the string if it is a punctuation
    first.erase(remove_if(first.begin(), first.end(), ::ispunct), first.end());
    int a_syllable = syllablesln(first); //perform function call

    cout << "2nd Line: ";
    getline(cin, second);
    second.erase(remove_if(second.begin(), second.end(), ::ispunct), second.end());
    int b_syllable = syllablesln(second);

    cout << "3rd Line: ";
    getline(cin, third);
    third.erase(remove_if(third.begin(), third.end(), ::ispunct), third.end());
    int c_syllable = syllablesln(third);
    
    if ((a_syllable == 5) || (b_syllable == 7) || (c_syllable == 5)) //if the conditions are met for haiku 5,7,5
        cout << "This poem is a haiku" << endl; // diplay it is a haiku
    else 
        cout << "this is not a haiku" << endl; // display if not a haiku
}


//information about haiku and their syllables
//https://dev.to/thepracticaldev/daily-challenge-229-haiku-validator-d29 