/*check whether the given string is palindrome or not*/
#include<iostream>
#include<string>
using namespace std;
bool  ispalindrome(string s,int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
       if(s[i] != s[j]){
        return false;
       }
       i++;
       j--;
       
    }
    return true;
}
int main(){
    string s ="abcdcba";
    int n = s.length();
    if(ispalindrome(s,n)){
        cout <<"string is palindrome";
    }
    else cout <<"Not a palindrome";
    
  
    
}   