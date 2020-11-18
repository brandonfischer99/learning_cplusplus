#include <iostream>

using namespace std;

int main()
{
   int v1 = 0;
   int *p1 = &v1;
   cout << v1 << " and pointer value is " << *p1 << endl;

   *p1 = 42;

   cout << v1 << " and pointer value is " << *p1 << endl;

   return 0;
}
