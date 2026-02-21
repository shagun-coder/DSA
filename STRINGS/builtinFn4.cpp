#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    // push and pop back...
    // string str = "shagun";
    // cout << str << endl;
    // str.push_back('A');
    // str.push_back('A');
    // str.push_back('A');
    // str.push_back('A');
    // cout << str << endl;
    // str.pop_back();
    // cout << str;

    // use '+' operator

    // string s = "shagun";
    // cout << s << endl;
    // string t = "sharma";
    // // s = s + t;
    // // s = s+"padha"; // apend
    // cout << s << endl;

    // REVERSE()
    string s = "shagun";
    cout << s << endl;
    // reverse(s.begin(),s.end());
    // reverse  a to u
    reverse(s.begin()+2,s.begin()+5);
    cout << s << endl;
    
}