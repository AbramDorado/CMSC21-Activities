#include<iostream>
using namespace std;

void determineTriangle(int a, int b, int c){ //functio that accepts 3 number inputs 

    cout << "Length of the sides of a triangle(inches):" << endl; // Title
    // display side a of a triangle
    //store it in each of the variables
    cout << "Side a: "; 
    cin >> a;
    cout << "Side b: "; 
    cin >> b;
    cout << "Side c: ";
    cin >> c;

    //if else statements and display the type of triangle
    if(a==b && b==c) // check if a and b is equal, also check if b and c is equal 
        cout << "The triangle is EQUILATERAL.";
    else if (a==b || a==c || b==c)   //check is only 2 variables are equal
        cout << "The triangle is ISOSCELES.";
    else  //if there is no equal sides of a triangle
        cout << "The triangle is SCALENE.";
}

int main(){
    int a, b, c;
    //function call
    determineTriangle(a, b, c); 
    return 0;
}