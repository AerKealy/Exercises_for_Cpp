#include <iostream>
#include <stdio.h>

int main(){
    double Num1;
    double Num2;
    double result;
    char operation;

    std::cout << "Please Enter the operation (+, -, *, /,) " << '\n' << ": ";
    std::cin >> operation;

    
    

    switch(operation){
        case '+':
        std::cout << "Enter the number 1 = ";
        std::cin >> Num1;
        std::cout << "Enter the number 2 = " ;
        std::cin >> Num2;
        result = Num1+Num2;
        std::cout << result;
        break;

        case '-':
        std::cout << "Enter the number 1 = ";
        std::cin >> Num1;
        std::cout << "Enter the number 2 = " ;
        std::cin >> Num2;
        
        result = Num1-Num2;
        std::cout << result;
        break;

        case '*':
        std::cout << "Enter the number 1 = ";
        std::cin >> Num1;
        std::cout << "Enter the number 2 = " ;
        std::cin >> Num2;
        
        result = Num1*Num2;
        std::cout << result;
        break;

        case '/':
        std::cout << "Enter the number 1 = ";
        std::cin >> Num1;
        std::cout << "Enter the number 2 = " ;
        std::cin >> Num2;
        
        result = Num1/Num2;
        std::cout << result;
        break;

        default:
        std::cout << "That is not an operation";
    }
    return 0;
}