#include <iostream>

int** SetMatrix(int rows, int column);
void Show(int** pMatrix, int row, int column);
int** Multiplication(int** pMatrix1, int rows1, int columns1, int** pMatrix2, int rows2, int columns2);
bool Check(int column, int row);
void Delete(int** pMatrix, int row);

int main(){
    int rows1, columns1, rows2, columns2 ;
    bool chc =true;
    int** pMatrix1 = nullptr;
    int** pMatrix2 = nullptr;
    int** Total = nullptr;

    while(chc){
    std::cout <<  "Enter the first Matrix's Rows: ";
    std::cin >> rows1;
    std::cout <<  "Enter the first Matrix's Columns: ";
    std::cin >> columns1;
    pMatrix1 = SetMatrix(rows1, columns1);
    
    std::cout <<  "Enter the Second Matrix's Rows: ";
    std::cin >> rows2;
    std::cout <<  "Enter the Second Matrix's Columns: ";
    std::cin >> columns2;
    pMatrix2 = SetMatrix(rows2, columns2);
    chc = Check(columns1, rows2);
    }
    
    std::cout << "First Matrix: \n";
    Show(pMatrix1, rows1, columns1);
    std::cout << "Second Matrix: \n";
    Show(pMatrix2, rows2, columns2);

    Total = Multiplication(pMatrix1, rows1, columns1, pMatrix2, rows2, columns2);
    std::cout << "Total Matrix: \n";
    Show(Total, rows1, columns2);

    Delete(pMatrix1, rows1);
    Delete(pMatrix2, rows2);
    Delete(Total, rows1);

    return 0;
}

int** SetMatrix(int rows, int column){
    int **pMatrix = new int*[rows];

    for(int i=0; i<rows; i++){
        pMatrix[i] = new int[column];
    }
    pMatrix[rows][column];
    for(int i=0; i < rows; i++){
        for(int j=0; j<column; j++){
            std::cout << "Enter the element \n" << "Row" << j << " Column " << i << '\n' ;
            std::cin >> pMatrix[i][j];
        }
    }

    return pMatrix;
}

void Show(int** pMatrix, int row, int column){
    
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            std::cout << pMatrix[i][j] << ' ';
        }
        std::cout << '\n';
    }

}

bool Check(int column, int row){
    if(column != row){
        std::cout << "Cannot Multiply Matrixes\n";
        return true;
    }
    else{
        return false;
    }
}

int** Multiplication(int** pMatrix1, int rows1, int columns1, int** pMatrix2, int rows2, int columns2){
    int Temp;
    int** Total = new int*[rows1];

    for(int g=0; g<rows1; g++){
        Total[g] = new int[columns2];
    }

    for(int i=0; i<rows1; i++){
        for(int h=0; h<columns2; h++){
            Total[i][h] = 0;
            for(int j=0; j<columns1; j++){
                Total[i][h] += (pMatrix1[i][j] * pMatrix2[j][h]);
            }
        }
    }
    
    return Total;
}

void Delete(int** pMatrix, int row){
    for(int i=0; i<row; i++){
        delete[] pMatrix[i];
    }

    delete[] pMatrix;
}