#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

   
}

int main()
{
    stack<int> st;
    st.push(1);

    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"Original Stack: ";
    printStack(st); 
    stack<int>gt ; 
    stack<int>rt; 
    // empty st into gt
    while(!st.empty()){
        gt.push(st.top());
        st.pop();
    }
    //empty gt into rt
    while(!gt.empty()){
        rt.push(gt.top());
        gt.pop();
    }
    //empty rt into st
    while(!rt.empty()){
        st.push(rt.top());
        rt.pop();
    }
    cout << "After reversing the stack: ";
    printStack(st);
}