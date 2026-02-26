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
    v.push_back("shauvaini");
    int n = v.size();
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout <<v[i] << endl;

    }
    string first = v[0];
    string last = v[n-1];
    string s ="";
    for(int i = 0; i<min(first.size(),last.size());i++){ // we will compare the first and last string because after sorting, the common prefix will be between the first and last string, because the strings are sorted in lexicographical order, so the common prefix will be between the first and last string, and we will compare the characters of the first and last string one by one until we find a mismatch, and we will keep adding the matching characters to the result string s, at the end of the loop, we will have the longest common prefix in the string s
        if(first[i]== last[i]){
            s += first[i];
        }
        
    }
    cout << s;
}