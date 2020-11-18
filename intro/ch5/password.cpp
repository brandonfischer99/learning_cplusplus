#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inStream;
   ofstream outStream;
   inStream.open("passphrase.txt");
   outStream.open("new_passphrase.txt");

   string passPhrase;
   string newPassPhrase;

   if(!inStream.fail())
   {
      inStream >> passPhrase;
      
      cout << "The pass phrase is: " << passPhrase << endl;
      cout << "Length is: " << passPhrase.length() << endl;
   }
   cout << "Enter a new password: " << endl;
   cin >> newPassPhrase;
   outStream << newPassPhrase << endl;
   cout << "New password saved!\n";   

   inStream.close();
   outStream.close();
   return 0;
}
