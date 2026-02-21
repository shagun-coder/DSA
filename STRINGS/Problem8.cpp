//input a string and return the  number of times the neignbouring character different from each other...............
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ;
    cout <<"Enter string :";
    cin >> s;
    int count = 0;
    int n = s.length();

    for(int i = 0; i<n; i++){
        if(n == 1){
            
            break; // count 1 hi ayaga
        }
        if( n == 2 && s[0] != s[1] ){
            count = 1;

        }
        if(i ==  0){
            if(s[i] !=  s[i+1]) count++;
        }
        else if(i == n-1){
            if(s[i]!=(i+1)) count++;   
        }
        else if(s[i]!=s[i+1] && s[i-1]) count++;
    }
    cout << count << endl;
}

