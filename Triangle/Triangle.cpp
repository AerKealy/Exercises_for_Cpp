#include <iostream>

using namespace std;

int main(){
    int number;
    int space;
    cout << "Please Enter The Lenght Of The Triangle: ";
    cin >> number;

    for(int j = 1; j <= number; j++ ){
        
        space = number - j;
        for(int i=1; i <= space; i++ ){
            cout << " ";
        }

        for(int h =1; h <= j; h++ ){
            cout << "*";
        }

        cout << '\n';

    }

    return main();
}