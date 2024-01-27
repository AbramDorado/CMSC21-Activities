#include <iostream>
#include <map>
using namespace std;

int romanToDecimal(string letter){ //Function to return roman numeral value using maps
    map<char, int> roman;
    //roman numeral symbols and their respective values
    roman.insert({ 'M', 1000 });
    roman.insert({ 'D', 500 });
    roman.insert({ 'C', 100 });
    roman.insert({ 'L', 50 });
    roman.insert({ 'X', 10 });
    roman.insert({ 'V', 5 }); 
    roman.insert({ 'I', 1 }); 

    int sum = 0; //initialize sum to zero
    for (int i = 0; i < letter.length(); i++){ //use a for loop 
        if (roman[letter[i]] < roman[letter[i + 1]]) //if condition, present value is less than next value
        {
            sum = sum + roman[letter[i + 1]] - roman[letter[i]]; //subtract present from next value and add to sum
            i++; //increment
            continue;
        }
        sum = sum + roman[letter[i]]; //add latest to sum
    }
    return sum; //return the integer value 
}

int main(){
    string letter;
    cout << "Enter a Roman Numeral: "; //Enter the Roman numeral you want to convert
    cin >> letter;
    //print the output decimal value
    cout << "The Decimal form is: " << romanToDecimal(letter) << endl;
 
    return 0;
}