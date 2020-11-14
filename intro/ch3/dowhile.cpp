#include <iostream>

using namespace std;

int main()
{
   int userChoice = 0;
   do
   {
      cout << "Hello welcome to my menu!\n";
      cout << "Please choose one of the following options: \n";
      cout << "   1. Continue\n";
      cout << "   2. Quit\n";
      
      cin >> userChoice;
   }while(userChoice != 2);
}
