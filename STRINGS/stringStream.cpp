/*Given a sentence ,split  every singlw word of the sentence and print it in new line*/
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){

    string s ;
    cout <<"Enter a string:";
    getline(cin,s);
    string temp;
    stringstream ss(s); 
    
    while(ss>>temp)
    {
        cout << temp<<endl;
    }
}