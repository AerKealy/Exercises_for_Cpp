#include <iostream>
#include <string>

using namespace std;

int main(){
    string message;
    string Alphabet = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"} ;
    string Key = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

    cout << "Please enter the message to encrypt\n:";
    getline(cin, message);

    for(size_t i=0; i<message.length(); i++){
        
        if(Alphabet.find(message.at(i)) != string::npos){
            size_t j;
            j = Alphabet.find(message.at(i));
            message.at(i) = Key.at(j);
        }

        else{
            continue;
        }
    }

    cout << "\nHere is the encrypted message: "<< message;
    
     for(size_t i=0; i<message.length(); i++){

        if(Key.find(message.at(i)) != string::npos){
            size_t j;
            j = Key.find(message.at(i));
            message.at(i) = Alphabet.at(j);
        }

        else{
            continue;
        }
    }

    cout << "\n\nDecrypted mesage is: " << message;

    return 0;
    }

    