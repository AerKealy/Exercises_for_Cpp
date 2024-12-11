#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <utility>
#include <cmath>

using namespace std;

enum Selection { Additem=1, Deleteitem, Prices, ShowMenu, Quit};

void AddItem(vector<string>&, vector<double>&);
void Delete(vector<string>&, vector<double>&);
void Price(vector<double>&);
void Menu(vector<string>, vector<double>);

const int MAX = 25;
vector<string> items {};
vector<double> price {0.00};

int main(){
   
   
   Selection selection;
   int input;

   do{   
      cout << "\n  Welcome What would you like to do  \n";
      cout << "----------------------------------------\n";
      cout << "Select the one of the following options\n"
            << "----------------------------------------\n"
            << "\t1 For Adding a new item\n"
            << "\t2 For Deleting an item\n"
            << "\t3 For changing prices\n"
            << "\t4 For Showing the Menu\n"
            << "\t5 For Quit\n"
            << "----------------------------------------\n"
            << "Please select: ";
      
      cin >> input;
      if(cin.fail()){
         cin.clear();
         cin.ignore();
         cout << "Unvalid Input\n";
         system("pause");
         return main();
      }
      else{
      
         selection = static_cast<Selection>(input);

         switch(selection){
            case Additem   : AddItem(items, price); Menu(items, price); break;
            case Prices    : Price(price); Menu(items, price); break;
            case ShowMenu  : Menu(items, price); break;
            case Deleteitem: Menu(items, price); Delete(items, price); Menu(items, price); break;
            case Quit: cout << "Goodbye"; break;
            default: cout << "Please select a valid operation\n";
         }
      }
   }while(input != 5);
   return 0;
}

void AddItem(vector<string> &items, vector<double> &price){
   bool valid = 0;
   char again;
   string itemToAdd;
   cout << "Please enter what item would you like to add\n";
   cin.ignore();
   getline(cin, itemToAdd);

   if(itemToAdd.length() > MAX){
      cout << "It's too long can't accept it\n";
      system("pause");
      AddItem(items, price);
   }
   else{
      items.push_back(itemToAdd);
      price.push_back(0);
   }

   do{   
      cout << "Add another item Y/N: ";
      cin >> again;

      switch(again){
         case 'y':
         case 'Y': AddItem(items, price); break;

         case 'N':
         case 'n': valid = 0; return; break;
         default : cout << "Not a valid option"; valid = 1; break;
      }
   }while(valid);
   }


void Delete(vector<string>& items, vector<double>& price){
   bool valid;
   char again;
   int select;
   cout << "Select an item to delete: ";
   cin >> select;

   if(!cin.fail()){
      items.erase(items.begin() + select-1);
      price.erase(price.begin() + select-1);
      cout << "Item Deleted\n";
   }
   else{
      cout << "Not Deleted\n";
      Delete(items, price);
   }

   do{   
      cout << "Delete another item Y/N: ";
      cin >> again;

      switch(again){
         case 'y':
         case 'Y': Delete(items, price); break;
         case 'N':
         case 'n': valid = 0; return; break;
         default : cout << "Not a valid option"; valid = 1; break;
      }
   }while(valid);
}

void Price(vector<double>& prices){
   
   Menu(items, price);
   
   char again;
   int select;
   double change = 0;
   bool valid1, valid2 ;

   cout << "Please select the ID of the food you like to change price\n";
   cin >> select;

   
   if(cin.fail() || select > prices.size()){
         cin.clear();
         cin.ignore();
         cout << "Unrecognized ID try again\n";
         return Price(prices);
   }

   do{   
      cout << "Enter the Price: ";
      cin >> change;
      if(cin.fail()){
         cout << "Unvalid price\n";
         valid1 = 1;
      }
      else{
         prices[select-1] = change;
         valid1 = 0;
      }
   }while(valid1);

   do{   
      cout << "Add another item: ";
      cin >> again;

      switch(again){
         case 'y':
         case 'Y': Price(price); break;
         case 'N':
         case 'n': valid2 = 0; return; break;
         default : cout << "Not a valid option"; valid2 = 1; break;
      }
   }while(valid2);
}

void Menu(vector<string> items, vector<double> price){ 
   cout << "*********************MENU***********************\n";
   cout << "ID------Food-----------------Price-----------------\n";
   for(int i=0; i<items.size(); i++){
      cout << i+1 << '\t' << items[i] << setw(MAX - items[i].length()) << fixed << setprecision(2) << abs(price[i]) << '\n';
   }
   cout << "************************************************\n";
}
