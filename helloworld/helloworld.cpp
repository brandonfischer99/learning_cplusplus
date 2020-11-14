#include <iostream>
using namespace std;

int main()
{
   string name, food;
   cout << "What's your name?\n" ;
   cin >> name;
   cout << "Hello " << name << "! ";
   cout << "What's your favorite food?\n" ;
   cin >> food;
   cout << "Wow, I like " << food << " too!" << endl;
   return 0;
}
