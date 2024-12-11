#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Please Enter The Lenght Of The Triangle: ";
    cin >> number;

    for(int j = 1; j <= number; j++ ){
        
        for(int h =1; h <= j; h++ ){
            cout << "*";
        }

        cout << '\n';

    }

    return 0;
}