// input a string and concatenate with the reversed string and print it
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s1;
    cin >> s1;
    string temp = s1;
    reverse(temp.begin(),temp.end());
    s1 += temp;
    cout << s1;





}