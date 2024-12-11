#include <iostream>

char PlayerPick(char choice);
char ComputerPick();
void ShowPick(char pick);
void Winner(char player1, char player2);

char player1, player2, computer; 
int Rnum;

int main(){
    
    std::cout << "Welcome to Rock-Paper-Scissor\n";
    std::cout << "*********************************\n";
    std::cout << "Player 1: ";
    player1 = PlayerPick(player1);

    std::cout << "Player 2: ";
    player2 = PlayerPick(player2);
    computer = ComputerPick();

    std::cout << "Player1 Picked: ";
    ShowPick(player1);

    std::cout << "Player2 Picked: ";
    ShowPick(player2);

    std::cout << "Computer Picked: ";
    ShowPick(computer);

    Winner(player1, player2);
    std::cout << "*********************************\n";
    system("pause");
    return main();
}

char PlayerPick(char choice){
    do{
    std::cout << "Enter one of the options\n";
    std::cout << "'r' for Rock\n";
    std::cout << "'s' for Scissor\n";
    std::cout << "'p' for Paper\n" << ": ";
    std::cin >> choice;
    }while(choice != 'r' && choice != 's' && choice != 'p');
    

    return choice;
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

void Winner(char player1, char player2){
    switch(player1){
        case 'r':   if(computer == 'r' && player2 == 'r'){std::cout << "It's a TIE\n";}
                    else if (computer == 'r' && player2 == 'p'){std::cout << "Player2 WON\n";}
                    else if (computer == 'r' && player2 == 's'){std::cout << "Computer and Player1 WON \n";} 
                    else if (computer == 'p' && player2 == 'r'){std::cout << "Computer WON\n";}
                    else if (computer == 's' && player2 == 'r'){std::cout << "Player1 and Player2 WON\n";}
                    else if (computer == 'p' && player2 == 's'){std::cout << "Everyone Lose and Won\n";}
                    else if (computer == 's' && player2 == 'p'){std::cout << "Everyone Lose and Won\n";} 
                    else if (computer == 's' && player2 == 's'){std::cout << "You WON\n";}
                    else if (computer == 'p' && player2 == 'p'){std::cout << "Computer and Player2 WON\n";}
                    else{std::cout << "How did we get here";}  
                    
        break;

        case 'p':   if(computer == 'r' && player2 == 'r'){std::cout << "You WON\n";} 
                    else if (computer == 'r' && player2 == 'p'){std::cout << "Player1 and Player2 WON\n";} 
                    else if (computer == 'r' && player2 == 's'){std::cout << "Everyone Lose and Won\n";} 
                    else if (computer == 'p' && player2 == 'r'){std::cout << "Computer and Player1 WON\n";} 
                    else if (computer == 's' && player2 == 'r'){std::cout << "Everyone Lose and Won\n";} 
                    else if (computer == 'p' && player2 == 's'){std::cout << "Player2 WON\n";} 
                    else if (computer == 's' && player2 == 'p'){std::cout << "Computer WON\n";} 
                    else if (computer == 's' && player2 == 's'){std::cout << "Computer and Player2 WON\n";}
                    else if (computer == 'p' && player2 == 'p'){std::cout << "It's a TIE\n";} 
                    else{std::cout << "How did we get here";} 
        break;

        case 's':   if(computer == 'r' && player2 == 'r'){std::cout << "Computer and Player2 WON\n";}
                    else if (computer == 'r' && player2 == 'p'){std::cout << "Everyone Lose and Won\n";}
                    else if (computer == 'r' && player2 == 's'){std::cout << "Computer WON \n";} 
                    else if (computer == 'p' && player2 == 'r'){std::cout << "Everyone Lose and Won\n";}
                    else if (computer == 's' && player2 == 'r'){std::cout << "Player2 WON\n";}
                    else if (computer == 'p' && player2 == 's'){std::cout << "Player1 and Player2 WON\n";}
                    else if (computer == 's' && player2 == 'p'){std::cout << "Computer and Player1 WON\n";} 
                    else if (computer == 's' && player2 == 's'){std::cout << "It's a TIE\n";}
                    else if (computer == 'p' && player2 == 'p'){std::cout << "You WON\n";}
                    else{std::cout << "How did we get here";} 
        break;
    }
}