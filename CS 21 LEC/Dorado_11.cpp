#include <cstdio>

int sumOfDigits(int n){
    int results = 0; //variable where the summation will be stored

    if(n < 10) //Base case
        return n; 
        
    else { //Recursive case
        results = results + n % 10; //get the remainder and store it in results
        return sumOfDigits(n / 10) + results; //perform the recursion
        //immediately dived 354 by 10
        //with the recursion will stop until the digit become zero
        //and wil return to the base case
    }
}

int main()
{
    //print out the digits
    printf("The Sum of the Digits is: %d\n", sumOfDigits(354)); 
    return 0;
}