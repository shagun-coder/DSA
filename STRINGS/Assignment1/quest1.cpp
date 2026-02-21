//input a string and update all position in the string to character to # consider 0 based indexing...........
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout <<"Enter a string:";
    cin >> str;;
    int n = str.length();
    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
            str[i] ='#';
        }
        if(n == 1) cout << str;
    }
    cout <<"After updatinga all odd positions :"<< str;
    
}