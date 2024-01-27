#include <iostream>
#include <vector>
#include <string>
using namespace std;
/**
Create a program that calculates the probability of two names. You must use functions. You can use the template attached.

Here is the algorithm to calculate the compatibility of two names.

(1) Ask the user for two names.
(2) From the input, count the number of T's, R's, U's, E's, L's, O's, V's and E's (again) from the names. 

For example, for the names John Smith and Jane Doe, we have:

T - 1
R - 0
U - 0
E - 2
L - 0
O - 2
V - 0
E - 2

Add the numbers with each other until you end up with 2 digits as in the following:

Note: When adding, discard the tens digit and only retain the 1's digit. 

As in the example, we have 6+8 = 4, 6+4=0.
**/  
void compute_compatibility(string name1,string name2); //implement this function

int main() 
{
  string name1 = "";
  string name2 = "";

  cout << "Enter the name: \n";
  getline(cin, name1);

  cout << "Enter the name of the partner: \n";
  getline(cin, name2);

}

