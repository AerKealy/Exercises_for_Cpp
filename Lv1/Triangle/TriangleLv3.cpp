#include <iostream>

using namespace std;

int main(){
    int number;
    int space;
    cout << "Please Enter The Lenght Of The Triangle: ";
    cin >> number;

    for(int j = 1; j<=number; j++ ){
        
        space = number - j;

        for(int k =1; k <= j; k++ ){
            cout << "*";
        }
        for(int t =0; t<1; t++){
            for(int l=1; l <= space; l++ ){
                cout << " ";
            }
        }

        for(int h =1; h <= j; h++ ){
            cout << "*";
        }

        cout << '\n';

    }

    return main();
    
}