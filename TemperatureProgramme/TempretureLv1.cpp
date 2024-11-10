#include  <iostream>

int main(){
    
    double Temp;
    
    std::cout << "*********************\n";
    std::cout << "Enter Fahrenheit " << "\n : ";
    std::cin >> Temp;

    Temp = (Temp-32)/1.8;

    std::cout << "Your Tempreture is " << Temp << "C";

    return 0;
}