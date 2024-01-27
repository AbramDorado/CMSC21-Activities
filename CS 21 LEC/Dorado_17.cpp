#include <iostream>
#include <vector>
#include <string>
using namespace std;

int run_over(string n, char ch);

void compute_compatibility(string name1,string name2){ //implement this function
    //make a vector and call the auxiliary function that has the vale containing each letter of t,r,u,e,l,o,v,e. (ex: t = 1)
    vector<int> compute = {
        run_over(name1, 't') + run_over(name2, 't'), run_over(name1, 'r') + run_over(name2, 'r'), run_over(name1, 'u') + run_over(name2, 'u'), run_over(name1, 'e') + run_over(name2, 'e'),
        run_over(name1, 'l') + run_over(name2, 'l'), run_over(name1, 'o') + run_over(name2, 'o'), run_over(name1, 'v') + run_over(name2, 'v'), run_over(name1, 'e') + run_over(name2, 'e')};

    //compute for the value by suming up the the first 2 elements of the vector
    //move the summation to the last part of the vector
    //then delete the first element
    while(compute.size() != 2){
        for(int i = 1; i < compute.size(); i++){ 
            compute.push_back((compute[0] + compute[1]) %10); //only get the one's digit, so modulo it by 10
            compute.erase(compute.begin());  // erase the beginning
        }
        //delete the first element coming from the first iteration
        compute.erase(compute.begin()); 
    }
    char A, B;
    string sum = "";

    //add the first digit to the 2nd
    //concatenate all to combine the added value
    A = compute[0] +'0'; 
    B = compute[1] +'0';
    cout << sum + A + B + "%" << endl;
}

int main (){
    string name1 = "";
    string name2 = "";

    //Ask the user for two names.
    cout << "Enter the name: \n";
    getline(cin, name1);
    cout << "Enter the name of the partner: \n";
    getline(cin, name2);

    compute_compatibility(name1, name2); //function call
    
    return 0;
}

//Auxilliary function to count each that has the character t,r,u,e,l,o,v,e
int run_over(string n, char ch){
    int counter = 0;
    for(int i = 0; i < n.size(); i++){
        if(tolower(n[i]) == ch)
            counter ++;
    }
    return counter;
}

//supplementary ideas about vectors
//https://www.programiz.com/cpp-programming/vectors
//https://www.geeksforgeeks.org/vector-in-cpp-stl/
//tolower
//https://www.programiz.com/c-programming/library-function/ctype.h/tolower#:~:text=The%20tolower()%20function%20takes,h%20header%20file.