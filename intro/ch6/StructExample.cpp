#include <iostream>

using namespace std;

struct student{
   string name;
   float gpa;
};

int main()
{
   student myclass[10];
   myclass[0].name = "Tom";
   myclass[0].gpa = 4.0;

   cout << myclass[0].name << endl;

   return 0;
}
