#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Display(const vector<int>);
void Add(vector<int>&);
void Mean(const vector<int>);
void FindSmall(const vector<int>);
void FindBig(const vector<int>);


int main(){
char selection;
vector<int> vec {};
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
        
        cin >> selection;
        selection = toupper(selection);
        
        switch(selection){
            case 'P': Display(vec);  break;
            case 'A': Add(vec);  break;
            case 'M': Mean(vec);  break;
            case 'S': FindSmall(vec);  break;
            case 'L': FindBig(vec);  break;
            case 'Q': cout << "\ngoodbye";  break;
        }
    }while(selection != 'Q');

    return 0;
}

void Display(const vector<int> vec){

    if(vec.size() == 0)
        cout << "Your vector is empty\n";
    
    else
    for(int V : vec){
        cout << V << ", " ; 
    }
    cout << '\n';
}

void Add(vector<int>& vec){
    int temp;
    cout << "\nWhat entry you are adding: ";
    cin >> temp;

    vec.push_back(temp);
}

void Mean(const vector<int> vec){
    double average;

    if(vec.size()!=0){
        for(int V:vec){
            average += static_cast<double>(V)/vec.size();
        }
    }

    else 
        average = 0;
    cout << "The average of your vector is: " << average << '\n';
}

void FindSmall(const vector<int> vec){
    int temp = vec.at(0);

    for(size_t i=0; i<vec.size(); i++){
        if(vec.at(i) < temp)
            temp = vec.at(i);
        
        else
            continue;
    }
    cout << "Smallest entry on your vector is: " << temp << '\n';
}

void FindBig(const vector<int> vec){
    int temp = vec.at(0);

    for(size_t i=0;i<vec.size(); i++){
        if(vec.at(i) > temp)
            temp = vec.at(i);

        else
            continue;
    }
    cout << "Largest entry on your vector is: " << temp << '\n';
}