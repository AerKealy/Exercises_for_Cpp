#include <iostream>

int main(){

    int AvgEven;
    int AvgOdd;
    int Even = 0;
    int Odd = 0;
    int Codd = 0;
    int Ceven= 0;

    for(int i = 1; i <=1000; i++){
   
        if(i % 2 == 0){
            
            Ceven++;
            Even += i;
            AvgEven = Even / Ceven ;
            
       }

       else {
        
        Codd++;
        Odd += i;
        AvgOdd = Odd / Codd ;
       }

    }

    std::cout << AvgEven << "\n";
    std::cout << AvgOdd << '\n';
    return 0;
}