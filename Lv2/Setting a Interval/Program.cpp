#include <iostream>
#include <vector> 

using namespace std;

int main(){

    char Selection;
    vector<int> Vec;

    do{
        cout << "         OPERATIONS\n"
             << "-------------------------------\n"
             << "\t'P' - for Display\n"
             << "\t'A' - for Adding new integer\n"
             << "\t'M' - for Mean(Average)\n"
             << "\t'S' - for Smallest Integer\n" 
             << "\t'L' - for Largest Integer\n"
             << "\t'Q' - for Quit\n"
             << "-------------------------------\n"
             << "Enter Your Selection: ";
        cin >> Selection;
    
        switch(Selection){
            case 'P':
            case 'p': 
            {
                if(Vec.empty()){
                    cout << "Vector can't be displayed - It's empty\n";
                }

                else{
                    cout << '[';
                    for(auto Vector: Vec){
                        cout << ' ' <<Vector << ' ' ;  
                    }
                    cout << ']' << '\n';
                }
            }
            break;

            case 'A':
            case 'a':
            {
                int number;
                cout << "Enter the number to add: ";
                cin >> number;
                Vec.push_back(number);
                cout << number << " added\n";
            }
            break;

            case 'M':
            case 'm': 
            {
                double Avg;
                for(auto Vector : Vec){
                    Avg += Vector; 
                }
                cout << "The mean of the list is " << static_cast<double>(Avg/Vec.size())  << '\n';
            }
            break;

            case 'S':
            case 's': 
            {
                int Smallest = Vec.at(0);
                for(auto Vector:Vec){
                    if(Vector < Smallest){
                        Smallest = Vector;
                    }
                }
                cout << "The smallest element in the vector is " << Smallest << '\n';
            }
            break;

            case 'L':
            case 'l':
            {
                int Largest = Vec.at(0);
                for(auto Vector:Vec){
                    if(Vector > Largest){
                        Largest = Vector;
                    }
                }
                cout << "The Largest element in the vector is " << Largest << '\n';
            }
            break;

            case 'Q':
            case 'q': 
                cout << "Goodbye";
            break;

            default: cout << "Wrong output try again";
        }

    }while(Selection!='q' && Selection!='Q');
}