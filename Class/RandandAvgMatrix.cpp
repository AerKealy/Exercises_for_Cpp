#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;

int main(){
	int matrix[10][10];
	int avg[10];
	srand(time(0));

	for(int i=0; i<50; i++){
		cout << '-';
	}

	cout << '\n';

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			matrix[i][j] = (rand() %20) +1;

		}
	}

	for(int i=0; i<10; i++){
		int sum = 0;
		for(int j=0; j<10; j++){
			sum += matrix[i][j]; 
		}
		avg[i] = round(sum/10);
	}

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout << matrix[i][j] << std::setw(3);
		}
		cout << '|';
		for(int h=0; h<avg[i]; h++){
			cout << '*';
		}
		cout << '\n';
	}

	for(int i=0; i<50; i++){
		cout << '-';
	}


	return 0;
}