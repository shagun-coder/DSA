// This program demonstrates the creation of a linked list and prints the data of the first node.
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
int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    Node*e = new Node(50);
    a->next = b;
    b->next =c;
    c->next = d;
    d->next = e;
    Node *temp =a; // we are creating a temp node and storing the address  , value  in it
    
    while(temp != NULL){ // we are checking if temp node is not null then we will print the data and move to next node
        cout <<temp->data<<" ";
        temp = temp->next; // this will move the temp node to next node


    }
}