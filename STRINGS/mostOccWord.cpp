/*giving a sentence 'str' return word that is occuring most number of times in that sentence */
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s = "raghav is a maths teacher . He is dsa mentor as well";
  
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout << endl;
   
    sort(v.begin(),v.end());
  
    int count = 1;
    int mxcount = 1;
   
    for(int i = 1; i<v.size(); i++){
        
        if(v[i]==v[i-1]){
            count++;
        }
        else count = 1;
        mxcount = max(mxcount,count);
        
    }
   
    for(int i = 1; i<v.size(); i++){
        
        if(v[i]==v[i-1]){
            count++;
        }
        else count = 1;
        if(count == mxcount){
            cout <<v[i] <<" "<<mxcount<<endl;
        }
    }
}