#include <iostream>
using namespace std;

int main(){
    int result;
    
    for(int i =1; i<10; i++){
        for(int j=1; j<=10; j++){
            result = j*i;
            cout << i << "x" << j << '=' << result << '\n';
        }
        cout << '\n';
    }
    
    return 0;
}