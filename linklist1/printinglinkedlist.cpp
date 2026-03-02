#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; //
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    Node temp = a; //
    while (1) // we are checking if temp node is not null then we will print the data and move to next node
    {
       
        cout << temp.data << " "; // this will print the data of temp node
        if (temp.next == NULL) break;
            temp = *temp.next; // this will move the temp node to next node
    }
  
}
