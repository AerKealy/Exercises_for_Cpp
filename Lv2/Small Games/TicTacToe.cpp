#include <iostream>
#include <ctime>

void Saha(char *deger);
void OyuncuGirdi(char *deger, char oyuncu);
void BilgisayarGirdi(char *deger, char pc);
bool Kazanma(char *deger, char oyuncu);
bool Beraberlik(char *deger);

int main(){
    
    char deger[9];
    std::fill(deger, deger+9, ' ');
    char oyuncu = 'X';
    char pc = 'O';
    bool calisma = true;
    
    while(calisma){
        Saha(deger);
        OyuncuGirdi(deger, oyuncu);

        if(Kazanma(deger, oyuncu)){
            calisma = false;
            Saha(deger);
            break;
        }
        else if(Beraberlik(deger)){
            calisma = false;
            break;
        }
        BilgisayarGirdi(deger, pc);
        if(Kazanma(deger, oyuncu)){
            calisma = false;
            Saha(deger);
            break;
        }
        else if(Beraberlik(deger)){
            calisma = false;
            break;
        }
    std::cout << "*****************************\n";
    }

    std::cout << "Oynadigin icin Tesekkurler";
    
    return 0;
}

void Saha(char *deger){
    std::cout << '\n';
    std::cout << "     |     |     \n" ;
    std::cout << "  " << deger[0] << "  |  " << deger[1] << "  |  " << deger[2] << "  \n";
    std::cout << "_____|_____|_____\n";
    
    std::cout << "     |     |     \n" ;
    std::cout << "  " << deger[3] << "  |  " << deger[4] << "  |  " << deger[5] << "  \n";
    std::cout << "_____|_____|_____\n";
    
    std::cout << "     |     |     \n" ;
    std::cout << "  " << deger[6] << "  |  " << deger[7] << "  |  " << deger[8] << "  \n";
    std::cout << '\n'; 
}
    
void OyuncuGirdi(char *deger, char oyuncu){
    int girdi;
    do{
        std::cout << "X koyacak yer seciniz (1-9): ";
        std::cin >> girdi;
        girdi--;
        if(deger[girdi] == ' '){
            deger[girdi] = oyuncu;
            break;
        }
    }while(!girdi < 8 || !girdi > 0 );

    

}

void BilgisayarGirdi(char *deger, char pc){
    srand(time(0));
    int girdi;
    while(true){
        
        girdi = rand() % 9;
        if(deger[girdi] == ' '){
            deger[girdi] = pc;
            break;
        }
        
    }

}

bool Kazanma(char *deger, char oyuncu){

    if(deger[0]!=' ' && deger[0]==deger[1] && deger[1]==deger[2]){
        deger[0] == oyuncu ? std::cout << "Kazandin" : std::cout << "Kaybettin";
    }


    else if(deger[3]!=' ' && deger[3]==deger[4] && deger[4]==deger[5]){
        deger[3] == oyuncu ? std::cout << "Kazandin" : std::cout << "Kaybettin";
    }


    else if(deger[6]!=' ' && deger[6]==deger[7] && deger[7]==deger[8]){
        deger[6] == oyuncu ? std::cout << "Kazandin" : std::cout << "Kaybettin";
    }


    else if(deger[0]!=' ' && deger[0]==deger[3] && deger[3]==deger[6]){
        deger[0] == oyuncu ? std::cout << "Kazandin" : std::cout << "Kaybettin";
    }


    else if(deger[1]!=' ' && deger[1]==deger[4] && deger[4]==deger[7]){
        deger[1] == oyuncu ? std::cout << "Kazandin" : std::cout << "Kaybettin";
    }


    else if(deger[2]!=' ' && deger[2]==deger[5] && deger[5]==deger[8]){
        deger[2] == oyuncu ? std::cout << "Kazandin" : std::cout << "Kaybettin";
    }


    else if(deger[0]!=' ' && deger[0]==deger[4] && deger[4]==deger[8]){
        deger[0] == oyuncu ? std::cout << "Kazandin" : std::cout << "Kaybettin";
    }


    else if(deger[2]!=' ' && deger[2]==deger[4] && deger[4]==deger[6]){
        deger[2] == oyuncu ? std::cout << "Kazandin" : std::cout << "Kaybettin";
    }

    else{
        return false;
    }

    return true;
}

bool Beraberlik(char *deger){
    for(int i=0; i < 9; i++){

        if(deger[i] == ' '){
        return false;
        }
    }
    std::cout << "Berabere\n";
    return true;
}