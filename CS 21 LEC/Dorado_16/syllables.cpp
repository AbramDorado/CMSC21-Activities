#include <iostream>
#include <sstream> //For string stream
#include <string> 
#include <vector>
using namespace std;

bool contains(std::string input, std::string tomatch)
{
  //check if a given string contains the substring tomatch.
  if(input.find(tomatch) != string::npos)
  {
    return true;
  }
  return false;
}


int vowelGroupCount(std::string input)
{
  //The number of syllables in a word is tied to the number of 'vowel groups'.
  int count = 0;
  for(int i = 0; i < input.size(); i++)
  {
    //Start by finding the number of vowel groups, then apply special rules.
    if((input[i]=='a')||(input[i]=='e')||(input[i]=='i')||(input[i]=='o')||(input[i]=='u')||(input[i]=='y')){
      count += 1;
    }  
  }
  //Consider a case when it ends with 'e'
  if(input[input.size()-1]=='e')
  {
    count -= 1;
  }
  //Consider double counting of diphthongs
  vector<string> check = {"ai", "au", "ee", "ea", "ie", "oa", "eo", "io", "oi", "oo", "ui", "ay", "ey"};
  for(string x : check)
  {
    if(contains(input, x))
    {
      count -= 1;
    }
  }
  
  if(count == 0)
  {
    count = 1;
  }
  
  return count;
}


int syllablesIn(string line)
{
  //apply removal of punctuations, uniform case (tolower) to the given line.
  int count = 0;
  //Use String Stream to the given line to tokenize the sentence by whitespaces.
  //e.g. "one two three" is tokenized into ["one", "two", "three"]
  string token; //use this to access each token
  //using while and >> operator, access each token and count the number of syllables.
  return count;
}

int main() {
  //std::cout << "Hello World!\n";
  //example use of syllablesIn
  std::cout << syllablesIn(string("An observation")) << "\n"; //5
  std::cout << syllablesIn(string("Haikus are concise but they")) << "\n"; //7
  std::cout << syllablesIn(string("Dont always say much")) << "\n"; //5
  std::cout << syllablesIn(string("open")) <<"\n"; //2
  std::cout << syllablesIn(string("came")) <<"\n"; //1
  std::cout << syllablesIn(string("outside")) <<"\n"; //3

}

