// C++ program to display stack elements using recursion
#include <iostream>
#include <stack>
using namespace std;
//display stack elements in reverse order using recursion
void displayreverse(stack<int> st)
{
  if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayreverse(st);
    st.push(x);
}

//display stack elements in the same order using recursion
void display(stack<int> st)
{
  if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
//push element at bottom of stack using recursion
void pushAtbottomRec(stack<int> &st, int x){
    if(st.size()==0){
        st.push(x);
        return;
    }
    int top=st.top();
    st.pop();
    pushAtbottomRec(st,x);
    st.push(top);
    
}

// // reverse stack using recursion
void reverseStack(stack<int> &st){
    if(st.size()==1) return;
    int top=st.top();
    st.pop();
    reverseStack(st);
    pushAtbottomRec(st,top);
}

int main()
{
    stack<int> st;
    // cout<<st.pop()<<endl; // this will cause error as stack is empty
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //display stack elements in the same order using recursion
    cout << "Elements of the stack in the same order using recursion : ";
    display(st);
    cout<<endl;

    //display stack elements in reverse order using recursion
    cout << "Elements of the stack in reverse order: ";
    displayreverse(st);
    cout<<endl;

    //push element at bottom of stack using recursion
    cout << "Pushing 60 at the bottom of the stack: ";
    pushAtbottomRec(st, 60);
    display(st);
    cout<<endl;
    //reverse stack using recursion

    cout << "Reversing the stack: ";
    reverseStack(st);
    display(st);

    
}