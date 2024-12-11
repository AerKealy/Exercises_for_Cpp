#include <iostream>
#include <limits>

double Addition(double Num2);
double Substraction(double Num2);
double Multiplication(double Num2);
double Division(double Add);

double Num;
int choice;

int main(){
    std::cout << "---------------------\n";
    std::cout << "Enter Number\n: ";
    std::cin >> Num;
    
    if(std::cin.fail()){
        std::cout << "That is not a number";
    }

    else{
        do{
            
            std::cout << "\n*******************\n";
            std::cout << "Enter operation\n";
            std::cout << "1. For addition\n";
            std::cout << "2. For substraction\n";
            std::cout << "3. For multiplication\n";
            std::cout << "4. For division\n";
            std::cout << "5. EXIT\n: ";
            std::cin >> choice;

            bool a = std::cin.fail();

            switch(a){
                case 1: std::cout << "Invalid Choice"; 
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
                case 0: 

                switch(choice){
                
                    case 1: 
                        Num = Addition(Num);
                    break;

                    case 2: 
                        Num = Substraction(Num);
                    break;

                    case 3: 
                        Num = Multiplication(Num);
                    break;

                    case 4: 
                        Num = Division(Num);
                    break;

                    default:
                    std::cout << "Goodbye";
                }
                break;
            }

            
            

        }while(choice!=5);
    }
    return 0;

}

double Addition(double Num2){
    std::cout << "Enter Number to add \n:";
    std::cin >> Num2;
    Num += Num2;
    std::cout <<"--------" << Num << "--------" << "\n";
    return Num;
}

double Substraction(double Num2){
    std::cout << "Enter Number to substract \n:";
    std::cin >> Num2;
    Num -= Num2;
    std::cout <<"--------" << Num << "--------" << "\n";
    return Num;
}

double Multiplication(double Num2){
    std::cout << "Enter Number to multiply \n:";
    std::cin >> Num2;
    Num *= Num2;
    std::cout <<"--------" << Num << "--------" << "\n";
    return Num;
}

double Division(double Num2){
    std::cout << "Enter Number to divide \n:";
    std::cin >> Num2;
    Num /= Num2;
    std::cout <<"--------" << Num << "--------" << "\n";
    return Num;
}