// push element at index in stack
#include<iostream>
#include <stack>
    using namespace std;
void printStack(stack<int> st)
{
    stack<int> temp;
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
void pushAtidx(stack<int> &st, int x, int idx){ // passing stack by reference to modify the original stack    
    stack<int> temp;
    //pushing elements of original stack to temp stack until idx is reached
    while(st.size() > idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    //pushing elements of temp stack to original stack
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
  
    printStack(st);
    pushAtidx(st, 60, 2); // pushing 60 at index 2
    printStack(st);

}