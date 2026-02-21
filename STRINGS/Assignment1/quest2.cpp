// input a string of length n and count all consonant in the given string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout <<"Enter string :";
    getline(cin,str);
    int n = str.length();
    int count = 0;
    for( int i = 0; i<n;i++){
      char ch = tolower(str[i]);
        if(ch>='a'&& ch <='z' || ch!='a'|| ch!='e'|| ch!='i'|| ch!='o'||ch!='u');{
            count++;
        }
    
    }
    cout <<"consonants:"<<count << endl;
}