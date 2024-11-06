#include <iostream>

using namespace std;
int main(){
    char type;
    double temp;

    cout << "**************************************\n";
    cout << "Please enter your tempreture type\n";
    cout << "F for fahrenheit to celcius\n";
    cout << "C for celcius to fahrenheit\n" << ": ";
    cin >> type;
    cout << "-------------------------------------\n";

    switch(type){
        case 'F':
        case 'f':
            cout << "Enter tempreture = ";
            cin >> temp;

            temp = (temp-32)/1.8;
            cout << "Tempreture is : " << temp << " C";

        break;

        case 'C':
        case 'c':

            cout << "Enter tempreture = ";
            cin >> temp;

            temp = (temp*1.8 )+32;
            cout << "Tempreture is : " << temp << " F";
            
        break;

        default:
            cout << "Invalid Type";

    }

    cout << "\n**************************************\n";

    system("pause");
    return main();

    return 0;
}