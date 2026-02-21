#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> st;
    // cout<<st.size()<<endl;
    st.push(1);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;

    //printing the top element  the stack
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    // how to get elements of the stack after popping them all out?
    stack<int> temp ; // create a copy of the original stack
    while(!st.empty()){
        cout<<st.top()<<" "; // print the top element
    //    store the popped element in the variable
       int poppedElement = st.top();
        st.pop();
        temp.push(poppedElement); // push the popped element into the temporary stack 
        temp.push(st.top()); // push the top element into the temporary stack  
    }
    // //putting the elements back into the original stack
    while(!temp.empty()){
        // int element = temp.top(); // get the top element from the temporary stack
        // temp.pop(); // pop the top element from the temporary stacks
        // st.push(element); // push the element back into the original stack
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    //printing the elements of the stack bottom to top
    while(!st.empty()){
      
        st.pop();
        cout << st.top() << " ";
    }
}