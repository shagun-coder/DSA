// creatimg link list using class node
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
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


    cout << a.data << " " << b.data << " " << c.data << endl;
    cout << a.next << " " << b.next<< " " << c.next<< endl;
   cout<<b.data<<endl; // this will print 20 as b.data is 20
   cout<<a.next->data<<endl; // this will print 20 as a.next is pointing to b and b.data is 20
    
    cout<<a.next->next->next->data<<endl; // this will print 40 as a.next is pointing to b, b.next is pointing to c, c.next is pointing to d and d.data is 40

     return 0;
}
