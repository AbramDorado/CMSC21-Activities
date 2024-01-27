#include <iostream>
using namespace std;

bool recursive_palindrome(string wrd, int first, int last){ //Recursive Function of Palindrome
	// base case
	if (first >= last) //Compare 
		return true;

    if (!(wrd[first] >= 'a' && wrd[first] <= 'z')) //check if there is a "non-letter" symbol in "left" side of string
        return recursive_palindrome(wrd, first + 1, last); //call the function again and increment "first"

    if (!(wrd[last] >= 'a' && wrd[last] <= 'z')) //check if there is a "non-letter" symbol in "right" side of string
        return recursive_palindrome(wrd, first, last - 1); //call the function again and decrement "last"
    
    // return false if mismatch happens
	if (wrd[first] != wrd[last])
		return false;

	return recursive_palindrome(wrd, first + 1, last - 1); //final recursion increment first and decrement last
}

int main(){
	string wrd;
    //Input a word to be checked and store in the variable
    cout << "Enter a word: ";
    getline(cin, wrd);
 
    int first = 0;  //first index
	int last = wrd.size() - 1; //last index

    //if else to display of palindrome or not
	if (recursive_palindrome(wrd, first, last)) //if true
		cout << "It's a Palindrome!" << endl; //Print out if Palindrome
	else //if not true
		cout << "Not a Palindrome :(" << endl; //Print out if not Palindrome
	return 0;
}