#include <iostream>
#include <vector>

int main()
{
   std::vector<int> v1(1,2);
   std::vector<int> v2{ 1,2 };
   std::cout << v1.size() << v2.size() << endl;
   return 0;
}

/*Shows two ways to initialize a vector. First, doing v1(1,2) makes
 * v1 size 1 with value 2. Could also do v1(10,2), where it would be 10
 * elmnts, each initialized to value 2. v2 shows initialization with
 * list constructor, just gives list of values to put in vector btw {}'s.
 * So, program will print 12*/
