#include <iostream>

using namespace std;

struct Node
{
   int data;
   Node *link;
};
void insert(Node **head_ptr, int data);

int main()
{
   Node *head;
   head = new Node;
   head->data = 20;
   head->link = NULL;

   insert(&head, 30);
   Node *tmp;
   tmp = head;

   while(tmp != NULL)
   {
      cout << tmp->data << endl;
      tmp = tmp->link;
   }
   return 0;
}

void insert(Node **head_ptr, int data)
{
   Node *tmp = new Node;
   tmp->data = data;
   tmp->link = *head_ptr;
   *head_ptr = tmp;
}
