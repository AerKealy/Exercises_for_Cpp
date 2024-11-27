#include <iostream>

struct human{
      std::string name;
      int age;
      bool gender;  
    };

int main(){

    human Num1;
        std::cout << "Enter name";
        std::cin >> Num1.name ;
        std::cout << "Enter age";
        std::cin >> Num1.age;
        std::cout << "Enter gender";
        std::cin >> Num1.gender;

    std::cout << Num1.age << '\n' << Num1.gender << '\n' << Num1.name; 

    return 0;
}