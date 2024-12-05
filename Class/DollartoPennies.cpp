#include <iostream>

using std::cout;
using std::cin;

int main() {
    int Money;
    int dollar = 0, quarter=0, dime=0, nickel=0, penny=0;
    
    cout << "Enter the money: ";
    cin >> Money;

do{
    while(Money >= 100){
        Money -=100;
        dollar++;
    }
    
    while(Money >= 25){
        Money -=25;
        quarter++;
    }
    
    while(Money >= 10){
        Money -=10;
        dime++;
    }
    
    while(Money >= 5){
        Money -=5;
        nickel++;
    }
  
    while(Money >= 1){
        Money -=1;
        penny++;
    }
}while(Money!=0);
    
cout << "Dollar: " << dollar << '\n';
cout << "Quarter: " << quarter << '\n';
cout << "Dime: " <<  dime << '\n';
cout << "Nickel: " << nickel << '\n';
cout << "Penny: " << penny <<'\n';   
    return 0;
}
