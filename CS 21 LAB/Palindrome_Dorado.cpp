#include<iostream>
using namespace std;

bool palindrome(string wrd, int len, int first,  int last){ //Recursive Function of Palindrome
    //Base case 
    //if 0 is greater than size of string/2
    if(first > len)
        return 1; //return true to main funciton

    //Recursive case 
    else{
        if (!(wrd[first] >= 'a' && wrd[first] <= 'z')) //check if there is a "non-letter" symbol in "left" side of string
            return palindrome(wrd, len + 1, first + 1,  last); //call the function again and increment "len" & "first"

        if (!(wrd[last] >= 'a' && wrd[last] <= 'z')) //check if there is a "non-letter" symbol in "right" side of string
            return palindrome(wrd, len, first, last -1); //call the function again and decrement "last"
        
        return wrd[first] == wrd[wrd.size()-first-1] && palindrome(wrd, len, first + 1, last - 1); //recursion when letters are equal
    }
}

int main(){
    //variable declaration and initialize
    string wrd; 
    int len = wrd.size() / 2;
    int first = 0;
    int last = wrd.size() - 1;

    //Input a word to be checked and store in the variable
    cout << "Enter a word: ";
    getline(cin, wrd);

    //if else to display of palindrome or not
    if (palindrome(wrd, len, first, last)) //if true
        cout << "It's a Palindrome!" << endl; //Print out if Palindrome
    else //if not true
        cout << "Not a Palindrome :(" << endl; //Print out if not Palindrome
    return 0;
}