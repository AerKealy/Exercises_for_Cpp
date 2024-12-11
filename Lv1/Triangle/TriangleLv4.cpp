#include <iostream>


int Triangle();

int lenght;
int space;

int main(){

    std::cout << "Please enter your Triangle's Lenght: ";
    std::cin >> lenght;
    Triangle();
    
    return 0;
}

int Triangle(){
    
    for(int i=0; i<=lenght; i++){

        space = lenght-i;
        for(int h=0; h<=space; h++){
            std::cout << " ";
        }

        for(int j=0; j<=i; j++){
            std::cout << "*";
        }
        
        for(int g=0; g<=i; g++){
        std::cout << "*";
        }

        std::cout << "\n"; 
  
    }
return 0;
}
