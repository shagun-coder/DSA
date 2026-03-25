// if we have either 1 or 2 steps at a time
#include<iostream>
using namespace std;
int stairs(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stairs(n - 2) + stairs(n - 1);
}
int main(){
    cout <<stairs(5);
}