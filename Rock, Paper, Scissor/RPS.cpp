#include <iostream>

char PlayerPick();
char ComputerPick();
void ShowPick(char pick);
void Winner(char player);

char player, computer; 
int Rnum;

int main(){
    
    std::cout << "Welcome to Rock-Paper-Scissor\n";
    std::cout << "*********************************";
    player = PlayerPick();
    computer = ComputerPick();

    std::cout << "You Picked: ";
    ShowPick(player);

    std::cout << "Computer Picked: ";
    ShowPick(computer);

    Winner(player);
    std::cout << "*********************************\n";
    system("pause");
    return main();
}

char PlayerPick(){
    do{
    std::cout << "Enter one of the options\n";
    std::cout << "'r' for Rock\n";
    std::cout << "'s' for Scissor\n";
    std::cout << "'p' for Paper\n" << ": ";
    std::cin >> player;
    }while(player != 'r' && player != 's' && player != 'p');
    

    return player;
}

char ComputerPick(){

    srand(time(0));
    Rnum = rand()%3+1;

    switch(Rnum){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

return 0;
}

void ShowPick(char pick){

    switch(pick){
        case 'r': std::cout << ": ROCK\n"; break;
        case 'p': std::cout << ": PAPER\n"; break;
        case 's': std::cout << ": SCISSOR\n"; break;
    }

}

void Winner(char player){
    switch(player){
        case 'r':   if(computer == 'r'){std::cout << "It's a TIE\n";} 
                    else if (computer == 'p'){std::cout << "You LOST\n";}
                    else{std::cout << "You WON\n";}
        break;

        case 'p':   if(computer == 'r'){std::cout << "You WON\n";} 
                    else if (computer == 'p'){std::cout << "It's a TIE\n";}
                    else{std::cout << "You LOST\n";}
        break;

        case 's':   if(computer == 'r'){std::cout << "You LOST\n";} 
                    else if (computer == 'p'){std::cout << "You WON\n";}
                    else{std::cout << "It's a TIE\n";}
        break;
    }
}