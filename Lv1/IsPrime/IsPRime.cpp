#include <iostream>
using namespace std;

int main(){

    int number;
    bool Prime = 1;

    do{
        cout << "Enter a number [2-100]: ";
        cin >> number;
    }while(number<2 || number > 100);

    for(int i=2; i<number; i++){ // If i is = 0 then program will divide bt 0 and fail
        if(number % i == 0){
            Prime = 0;
            break;
        }
        else{
            Prime = 1;
        }
    }

    if(Prime)
        cout << "Number is prime";
    else
        cout << "Number is not prime";
    return 0;
}