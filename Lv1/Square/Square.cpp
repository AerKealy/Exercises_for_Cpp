#include <iostream>

int main(){

    int lenght, t;

    std::cout << "Please Enter a Lenght: ";
    std::cin >> lenght;

    for(int s=0; s<2; s++){
        for(int j =1; j<=lenght; j++){
            std::cout << "*";
        }

        while(t != lenght-1){
            t++;
            std::cout << "\n";
            std::cout << "*";

            for(int k=1; k<=lenght-2; k++){
                std::cout << " ";
            }

            std::cout << "*";
        }
        std::cout << '\n';
    }
    return 0;
}