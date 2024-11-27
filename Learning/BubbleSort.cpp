#include <iostream>

void sort(int array[], int size);

int main(){

    int number[] = {8, 7, 9, 11, 15, 12, 1};
    int size = sizeof(number)/sizeof(number[0]);
    sort(number, size);
    for(int show : number){
        std::cout << show << '\n';
    }
    return 0;
}

void sort(int array[], int size){
    int Temporary;

     for (int i=0; i < size-1; i++){
        for(int j=0; j < size-i-1; j++){
            if(array[j] > array[j+1]){
            Temporary = array[j];
            array[j] = array[j+1];
            array[j+1] = Temporary;
            }
        }
    }
}