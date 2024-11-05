#include <iostream>
#include <string>

void ShowBalance(double balance1);
double deposit();
double withdraw(double balance1);
double withdraw(double balance2, bool account);
void ShowBalance(double balance2, bool account);

    std::string username;
    int passwordoriginal, password, choice;
    double balance1 = 0;
    double balance2 = 0;

int main(){
    
    std::cout << "**************************\n";
    std::cout << "Enter Username = ";
    std::cin >> username;

    do{
        if (username == "Ali"){
            passwordoriginal = 123456;
            std::cout << "Please enter your password = ";
            std::cin >> password;

            bool correct = passwordoriginal == password;

            switch(correct){
                case 0:
                    std::cout << "Password is incorrect";
                    return main();
                break;
                
                case 1:
                    std::cout << "Please enter a choice\n";
                    std::cout << "1. Show Balance\n";
                    std::cout << "1. Deposit Money\n";
                    std::cout << "3. Withdraw Money\n";
                    std::cout << "4. Exit\n";
                    std::cin >> choice;

                    switch(choice){
                        case 1:
                            ShowBalance(balance1);
                        break;

                        case 2:
                            balance1 += deposit();
                            ShowBalance(balance1);
                        break;

                        case 3:
                            balance1 -= withdraw(balance1);
                            ShowBalance(balance1);
                        break;

                        case 4:
                            std::cout << "Goodbye";
                            return main();
                        break;

                        default:
                            std::cout << "Invalid Choice\n";
                        }  
                break; 
            
            }
    }
    

    
        else if (username == "Riza"){
            passwordoriginal = 654321;
            std::cout << "Please enter your password = ";
            std::cin >> password;

            bool correct = passwordoriginal == password;

            switch(correct){
                case 0:
                    std::cout << "Password is incorrect\n";
                    return main();
                break;
                
                case 1:
                    std::cout << "Please enter a choice\n";
                    std::cout << "1. Show Balance\n";
                    std::cout << "1. Deposit Money\n";
                    std::cout << "3. Withdraw Money\n";
                    std::cout << "4. Exit\n";
                    std::cin >> choice;

                    switch(choice){
                        case 1:
                            ShowBalance(balance2, 0);
                        break;

                        case 2:
                            balance2 += deposit();
                            ShowBalance(balance2, 0);
                        break;

                        case 3:
                            balance2 -= withdraw(balance2, 0);
                            ShowBalance(balance2, 0);
                        break;

                        case 4:
                            std::cout << "Goodbye";
                            return main();
                        break;

                        default:
                            std::cout << "Invalid Choice";
                        }  
                break; 
            
            }
    }

    else(std::cout << "You are not registered");
    
    }while(choice != 4);
    return 0;
}


void ShowBalance(double balance1){
     std::cout << "Your balance is: $"<< balance1 << '\n';

}

double deposit(){
    
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount:\n";
        return 0;
    }
}
double withdraw(double balance1){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance1){
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}

void ShowBalance(double balance2, bool account){
     std::cout << "Your balance is: $"<< balance2 << '\n';

}

double withdraw(double balance2, bool account){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance2){
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}


