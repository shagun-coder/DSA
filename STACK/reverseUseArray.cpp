#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){

    stack<int> st;
    st.push(1);

    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "Original Stack: ";
    printStack(st);
    //reversing the stack using an array
    vector<int> arr;
    while (!st.empty())
    {
        arr.push_back(st.top());
        st.pop();
    }
    for (int i = 0; i < arr.size(); i++)
    {
        st.push(arr[i]);
    }
    printStack(st);
}