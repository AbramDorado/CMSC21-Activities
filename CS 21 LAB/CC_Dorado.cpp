#include<iostream>
using namespace std;
 
int main()
{
    //variable declarations
    char message[100], letter;
    int key, i;
    string shift, action;

    //inputed word or statements to be encrypted or decrypted
    cout << "Message: ";
    cin.getline(message, 100);
    //the number of times the letter wlll be shift
    cout << "Key: ";
    cin >> key;
    //choice on where to shift the letters
    cout << "Shift (right or left): ";
    cin >> shift;
    //choice of action
    cout << "Action (encrypt or decrypt): ";
    cin >> action;

    //if statment for encryption
    if(shift == "right" && action == "encrypt"){

        for(i = 0; message[i] != '\0'; ++i){   //run over every character in the satement
            letter = message[i];

            //encryption for lowercase characters
            if(letter >= 'a' && letter <= 'z'){   
                letter = letter + key;    //move to the right the number of shift to letter

                if(letter > 'z')
                    letter = letter - 'z' + 'a' - 1; //convert 

                message[i] = letter; //passs the value to mssg
            }

            //encryption for uppercase characters
            else if(letter >= 'A' && letter <= 'Z'){    
                letter = letter + key;     //move to the right the number of shift to letter
                
                if(letter > 'Z')
                    letter = letter - 'Z' + 'A' - 1; //convert

                message[i] = letter; //passs the value to mssg
            }
        }
    }

    //if statement for decryption
    else if(shift == "left" && action == "decrypt"){

        for(i = 0; message[i] != '\0'; ++i){  //run over every character in the satement
            letter = message[i];
            
            //decryption for lowercase characters
            if(letter >= 'a' && letter <= 'z'){    
                letter = letter - key;     //move to the left the number of shift to letter
            
                if(letter < 'a')
                    letter = letter + 'z' - 'a' + 1; //convert

                message[i] = letter; //passs the value to mssg
            }

            //decryption for uppercase characters
            else if(letter >= 'A' && letter <= 'Z'){   
                letter = letter - key;      //move to the left the number of shift to letter

                if(letter > 'a')
                    letter = letter + 'Z' - 'A' + 1; //convert

                message[i] = letter; //passs the value to mssg
            }
        }
    }

    cout << "Output: " << message;  // to display the encrypted or decrypted message
    return 0;
}