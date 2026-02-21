// sortting a str usinh inbuilt fn
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout <<"Enter a  string : ";
    // cin >> s;
    getline(cin ,s);
   
    sort(s.begin(),s.end());
     cout << "sorted  string are :" << s;

}