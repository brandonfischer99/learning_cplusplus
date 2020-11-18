#include <iostream>

class show_id
{
   public:
      ~show_id() { std::cout << id; } //destructor fxn
      int id;
};

int main()
{
   delete[] new show_id[3]{ {0}, {1}, {2}};
}

/*In C++, objects generally destroyed in reverse order than they
 * were constructed in. delete[] works this way.*/
