//STOI and STOOL
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    // string to integer
    string s  =  "123456";
    int x = stoi(s); //
    cout <<x+1;
    cout <<endl;
  ////  integer to string
    int a = 12345;
    string str = to_string(a);
    cout << a <<endl;

    string strlo ="8909997788990000";
    long long y = stoll(strlo);
    cout << y << endl;

} 