#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 5 //limit the array size into 5

using namespace std;

class Stack {
private:
    //variable declaration in private
    int num, i;
    int arr_stack[MAX_SIZE];
    int top;

public: //public these functions
    Stack() {
        top = 0;} //initialized value of top to zero 

    void push() { //push value in the stack
        if (top == MAX_SIZE)
            cout << "\nSTACK IS FULL!"; //if in the limit then the stack is full
        else {
            cout << "\nEnter The Value to be pushed: ";
            cin>>num;
            cout << "\nIndex: " << top << ", Pushed Value: " << num; //push and display it
            arr_stack[top++] = num; //incerement the index 
        }
    }

    void pop() { //pop some value in the stack
        if (top == 0) //if zero then empty
            cout << "\nSTACK IS EMPTY!";
        else {
            --top; //decrement the top vlaue
            cout << "\nIndex: " << top << ", Popped Value: " << arr_stack[top]; //pop and display it
        }
    }

    void rtop() { //display the value in the top of stack
        if (top == 0) //if zero then empty
            cout << "\nSTACK IS EMPTY!";
        else {
            cout << "\nIndex: " << top - 1 << ", Top Stack: " << arr_stack[top-1]; //show the top stack
        }
    }

    void check() { // check if the stack is empty or not
        if (top == 0)
            cout << "\nSTACK IS EMPTY!"; //if zero then empty
        else{
            cout << "\nSTACK IS NOT EMPTY"; //if not zero then not empty, display the stack
            cout << "\nStack Size: " << top;
            for (i = (top - 1); i >= 0; i--) //use for loop to diplay each array
                cout << "\nIndex: " << i << ", Value: " << arr_stack[i];
        }
    }   
};

int main() {
    int choice, exit = 1; //variable initialize
    Stack obj; //object

    do { //do-while loop
        cout << "\n\nSTACK MAIN MENU:";

        //Display options
        cout << "\n1.Push an integer" 
        "\n2.Pop the stack" 
        "\n3.Return the top of the stack" 
        "\n4.Check if empty" 
        "\n5.Exit" << endl;
        
        cout << "Enter Your Choice : ";
        cin >> choice;

        //use a switch statement
        switch (choice) {
            case 1: //if push some value
                obj.push();
                break;
            case 2: //if pop some value
                obj.pop();
                break;
            case 3: //if return top value of stack
                obj.rtop();
                break;
            case 4: //if check if empty or not
                obj.check();
                break;
            default: //if exit the program
                exit = 0;
                break;
        }
    } while (exit);

    return 0;
}