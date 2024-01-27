#include <iostream>
#include <vector>

using namespace std;

//bugs: 
//(1) no ampersand
//(2) immediate incrementation
//(3) no else statment to place the increment properly
void deduplicate(vector<string>& vec_str){      //function to remove duplication (add the ampersand to the argument)
    for(int i = 0; i < vec_str.size();)         //for loop (remove the iteration i++ here)
        if(vec_str[i] == vec_str[i+1])          //check if the string elements are the same
            vec_str.erase(vec_str.begin()+i);   //erase the element if same
        else                  
            i++;    //if the string element is not same, iterate i++
                    //This from vec_str[0] it will move to vec_str[1] ... to vec_str[n-1]
}                   //for as long as the strings are not the same

int main(){
    vector<string> hidden_figures = { //vector
        "Katherine Johnson",
        "Katherine Johnson",
        "Katherine Johnson",
        "Mary Jackson",
        "Dorothy Vaughan",
        "Dorothy Vaughan"
    };

    deduplicate(hidden_figures); //function call

    for(string x : hidden_figures) //enhanced for loop
        cout << x << " " << endl;
    cout << endl;
}