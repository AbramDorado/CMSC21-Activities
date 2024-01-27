#include <iostream>
#include <queue>
#include <stack>
#include <string>
using std::stack;
using std::queue;
using std::string;

//bool function for palindrome using stack and queue
bool isPalindrome(const std::string &input_string){ 
	stack<char> s;
	queue<char> q;
	
    //for loop to enlist all the letters in a string as elements in a stack and queue
	for(int j = 0; j < input_string.size(); j++){
        //the same string is stored in these two data structures
        //to be checked later on
		s.push(input_string[j]); // add each letter to stack
		q.push(input_string[j]); //enqueue an element
	}
	
	while(!s.empty()){ //if the stack is not empty, perfrom the function below
        //see if the top element of a stack is not the same as the last element of the queue
        //immediately return false if the elements are not same
		if (s.top() != q.front()){
			return false;
		}
        //perform these if the elements are the same, ex: r = r
		s.pop(); //pop or remove the top element of the stack
		q.pop(); //dequeue the last element of the queue
        //do these until all the elements are checked
	}
	return true;
}

int main(){
    string wrd;
    std::cout << "Enter a string: ";
    std::cin >> wrd;
	std::cout << isPalindrome(wrd) << std::endl; 
}