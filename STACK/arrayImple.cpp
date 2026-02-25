#include <iostream> 
using namespace std;
class stack{
   public:
   int arr[5];
   int idx;
   stack(){
       idx=-1;
   }
   void push(int val){
      if(idx==sizeof(arr)/sizeof(int)-1){
          cout<<"stack overflow"<<endl;
          return;
       }
       idx++;
         arr[idx]=val;
   }
   void pop(){
      if(idx ==-1)
{
      cout <<"stack underflow"<<endl;
      return;
}       idx--;
   }
   int top(){
      if(idx == -1){
         cout<<"stack is empty " <<endl;
         return -1;
      }
       return arr[idx];
   }
   int size(){
       return idx+1;
   }

};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); // stack overflow
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
}