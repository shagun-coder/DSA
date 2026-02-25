#include <iostream>
#include <vector>
using namespace std;
class stack // user defined data structure
{
public:
    vector<int> arr;
    int idx;
  
    stack()
    {
        idx = -1;
    }
    void push(int val)
    {
        
        idx++;
        arr[idx] = val;
    }
    void pop()
    {
        if (idx == -1) // v.size() == 0
        {
            cout << "stack underflow" << endl;
            return;
        }
        idx--;
    }
    int top()
    {
        if (idx == -1)
        {
            cout << "stack is empty " << endl;
            return -1;
        }
        return arr[arr.size() - 1];
    }
    int size()
    {
        return arr.size();
    }
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); // stack overflow
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
}