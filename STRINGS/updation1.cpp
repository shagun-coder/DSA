#include<iostream>
using namespace std;
int main(){
    // string str ="shagun";
    // cout << str;
    // str[0] = 'A';
    // cout << str;


    // input a string of size n  update all even positions to a
    string str ;
    cout <<"Enter string =";
    cin >> str; // will stop at space use getline for spaces
    for(int i = 0; str[i]!= '\0'; i++){
        if(i % 2 == 0){
            str[i] = 'a';
        }
        
    }
    cout << str;







}