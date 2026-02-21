//copy stack into other stack in the same order
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    stack<int> temp;// stack to hold same order of elements as original stack
    stack<int> copyStack; // stack to hold the copied elements in the same order
   

    //copy elements from original stack to tempStack
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    //copy elements from tempStack to copyStack
    while (!temp.empty())
    {
        copyStack.push(temp.top());
        temp.pop();
    }
   

    //printing the elements of the copyStack
    cout << "Elements of the copyStack: ";
    while (!copyStack.empty())
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;
    //printing the elements of the original stack

    cout << "Elements of the original stack: ";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}