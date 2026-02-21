//input a string of even length and reverse the sescond half od the string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){
    string s;
    cout <<"Enter string of even length :";
    cin >> s;
    int n = s.length();
    if(s.length()%2 != 0) cout<< "invalid input";
    else{
          reverse(s.begin()+n/2,s.end());
          cout <<s;
    }
  
   
}