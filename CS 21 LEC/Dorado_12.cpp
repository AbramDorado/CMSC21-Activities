#include <iostream>
#include <cstdio>

using namespace std;

int digitalRootOf(int n){
    int roots = 0; //variable where the summation will be stored

    if(n < 10) //Base case
        return n; 
        
    else { //Recursive case
     roots = roots + n % 10; //get the remainder and store it in roots
        return digitalRootOf(n / 10) + roots; //perform the recursion
        //immediately dived the digits by 10
        //with the recursion will stop until the digit become zero
        //and wil return to the base case
    }
}

int main()
{
    //print out the digital roots
    cout << "The Digital root is: " << digitalRootOf(5) << endl; 
    cout << "The Digital root is: " << digitalRootOf(27) << endl;
    cout << "The Digital root is: " << digitalRootOf(137) << endl;
    cout << "The Digital root is: " << digitalRootOf(11) << endl;
    return 0;
}