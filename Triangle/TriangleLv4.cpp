#include <iostream>

int RightTriangle();
int LeftTriangle();

int lenght;
int space;

int main(){

    std::cout << "Please enter your Triangle's Lenght: ";
    std::cin >> lenght;
    LeftTriangle();
    
    return 0;
}

int LeftTriangle(){
    
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


int RightTriangle(){

    for(int l=0; l <= lenght; l++){
        

        std::cout << "\n";  
    }
return 0;
}