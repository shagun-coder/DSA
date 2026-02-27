// linked list implementation of stack data structure
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    
    int pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
       
        int value = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return value;   
    }
    
    bool isEmpty()
    {
        return top == nullptr;
    }

    void display()
    {
        Node *current = top;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    
    
    ~Stack()
    {
        while (top != nullptr)
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }
};
int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Stack elements: ";
    stack.display();

    cout << "Popped element: " << stack.pop() << endl;

    cout << "Stack elements after pop: ";
    stack.display();
    

    return 0;
}