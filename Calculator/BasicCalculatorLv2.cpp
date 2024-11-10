#include <iostream>
#include <string>
#include <cmath>

int main(){
    std::string choice;
    char operation;
    double Num1, Num2, Total;
    const double PI = 3.14159226;

    std::cout << "*********************\n";
    std::cout << "Enter Your Operation\n";
    std::cout << "1. A for Basic Operations\n";
    std::cout << "2. B for Complex Operations\n";
    std::cout << "3. C for Trigonometric Operations\n" << ": ";
    std::cin >> operation;
    std::cout << "-------------------------------\n";

    switch(operation){
        case 'A':
        case 'a':
            std::cout << "Please make a choice\n";
            std::cout << "1. add for addition\n";
            std::cout << "2. subs for substraction\n";
            std::cout << "3. multip for multiplication\n";
            std::cout << "4. divide for division\n" << ": ";
            std::cin >> choice;
            std::cout << "-------------------------------\n";

            if(choice == "add"){
                std::cout << "Enter first number: ";
                std::cin >> Num1;

                std::cout << "Enter second number: ";
                std::cin >> Num2;

                Total = Num1 + Num2;
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "subs"){
                std::cout << "Enter first number: ";
                std::cin >> Num1;

                std::cout << "Enter second number: ";
                std::cin >> Num2;

                Total = Num1 - Num2;
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "divide" ){
                std::cout << "Enter first number: ";
                std::cin >> Num1;

                std::cout << "Enter second number: ";
                std::cin >> Num2;

                Total = Num1 / Num2;
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "multip"){
                std::cout << "Enter first number: ";
                std::cin >> Num1;

                std::cout << "Enter second number: ";
                std::cin >> Num2;

                Total = Num1 * Num2;
                std::cout << "Your total is: " << Total;
                
            }

            else{  
                std::cout << "Invalid Choice";
                
            }
        break;

        case 'B':
        case 'b':
            std::cout << "Please make a choice\n";
            std::cout << "1. log for logaritmic operation\n";
            std::cout << "2. pow for power operation\n";
            std::cout << "3. root for root of two operation\n";
            std::cout << "4. cube for root of three operation\n" << ": ";
            std::cin >> choice;
            std::cout << "-------------------------------\n";

            if(choice == "log"){
                std::cout << "Enter number: ";
                std::cin >> Num1;

                Total = log10(Num1);
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "pow"){
                std::cout << "Enter base: ";
                std::cin >> Num1;

                std::cout << "Enter exponenet: ";
                std::cin >> Num2;

                Total = pow(Num1, Num2);
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "root" ){
                std::cout << "Enter number: ";
                std::cin >> Num1;

                Total = sqrt(Num1);
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "cube"){
                std::cout << "Enter number: ";
                std::cin >> Num1;

                Total = cbrt(Num1);
                std::cout << "Your total is: " << Total;
                
            }

            else{  
                std::cout << "Invalid Choice";
                
            }

        
        break;

        case 'C':
        case 'c':

            std::cout << "Please make a choice\n";
            std::cout << "1. sin for sinus operation\n";
            std::cout << "2. cos for cosinus operation\n";
            std::cout << "3. tan for tangentoperation\n";
            std::cout << "4. cot for cotangent operation\n" << ": ";
            std::cin >> choice;
            std::cout << "-------------------------------\n";
        
            if(choice == "sin" ){
                std::cout << "Enter number: ";
                std::cin >> Num1;

                Total = sin(Num1*PI/180);
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "cos"){
                std::cout << "Enter number: ";
                std::cin >> Num1;

                Total = cos(Num1*PI/180);
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "tan" ){
                std::cout << "Enter number: ";
                std::cin >> Num1;

                Total = tan(Num1*PI/180);
                std::cout << "Your total is: " << Total;
                
            }

            else if(choice == "cot"){
                std::cout << "Enter number: ";
                std::cin >> Num1;

                Total = 1/tan(Num1*PI/180);
                std::cout << "Your total is: " << Total;
                
            }

            else{  
                std::cout << "Invalid Choice";
                
            }

        
        break;

        default:
            std::cout << "Invalid Operation";
    }

    std::cout << "\n*******************\n";

            system("pause");
            return main();
}