// given n string .find the common longest prefix string
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("shagun");
    v.push_back("shabnam");
    v.push_back("shalza");
    v.push_back("suvaini");
    int n = v.size();
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout <<v[i] << endl;

    }
    string first = v[0];
    string last = v[n-1];
    string s ="";
    for(int i = 0; i<min(first.size(),last.size());i++){
        if(first[i]== last[i]){
            s += first[i];
        }
        
    }
    cout << s;
}