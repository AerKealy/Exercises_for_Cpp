#include <iostream>

void ShowBalance(double balance);
double Deposit(double balance);
double Withdraw(double balance);

double balance;
double amount;
int choice;

int main(){
    
    do{
        std::cout << "\n******************************\n";
        std::cout << "Please enter a choice\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            ShowBalance(balance);
            
            break;

        case 2:
            balance = Deposit(balance);
            ShowBalance(balance);
            
            break;
        case 3:
            balance = Withdraw(balance);
            ShowBalance(balance);
            
            break;

        case 4:
            std::cout << "Have a nive day";
            break;

        default:
            std::cout << "Invalid operation";
            break;
        }
    }while(choice != 4);

    return 0;
}


void ShowBalance(double balance){
    std::cout << "Balance is : " << balance;
}

double Deposit(double balance){

    std::cout <<  "Enter an amount to deposit : ";
    std::cin >> amount;

    if(amount <= 0){
        std::cout << "Error invalid amount";
        return main();
    }

    else{
    balance += amount;
    return balance;
    }
}

double Withdraw(double balance){

    std::cout <<  "Enter an amount to withdraw : ";
    std::cin >> amount;

    if(amount <= 0){
        std::cout << "Error invalid amount";
        return main();
    }

    else{
        if(amount > balance){
            std::cout << "Insufficent balance";
            return main();
        }
        else{
            balance -= amount;
            return balance;
        }
    
    }
}
