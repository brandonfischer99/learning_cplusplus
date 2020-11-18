#include <cstdio>
using namespace std;

int main()
{
   int x = 7;
   int *ip = &x;
   int &y = x;

   //y always references x. Changing y's value just changes x's value
   //references technically not variables
   y = 42; //changes x
   
   printf("The value of *ip is %d\n", *ip);
   printf("The value of x is %d\n", x);
   printf("The value of y is %d\n", y);
}
