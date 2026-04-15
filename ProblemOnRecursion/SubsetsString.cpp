// subsets =>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubsets(string ans,string original){
    if(original.length() == 0) {
        cout << ans << endl;
        return;
    }
    char ch = original[0];
    printSubsets(ans+ch,original.substr(1));
    printSubsets(ans,original.substr(1));

}

void printSubsetIndex(string ans,string original ,int idx){
    if(idx == original.length()){
        cout << ans<<endl;
        return;
    }
    char ch = original[idx];
    printSubsetIndex(ans+ch,original,idx+1);
    printSubsetIndex(ans,original,idx+1);
}
void printSubsetVector(string ans,string original ,vector<string> &v){
    if(original.length() == 0) {
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    printSubsetVector(ans,original.substr(1),v);
    printSubsetVector(ans+ch,original.substr(1),v);
}
int main(){
    string s = "abc";
    vector<string> v;
    cout << "Subsets of " << s << " are: " << endl;
    printSubsets("",s);
    cout << "Subsets of " << s << " using index are: " << endl;
    printSubsetIndex("",s,0);
    cout<< "Subsets of " << s << " using vector are: " << endl;
    printSubsetVector("",s,v);
    for(string i : v) cout << i << endl;
}
