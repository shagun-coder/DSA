// method 2
// sort the array of 0s and 1s
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
for(int i = 0; i < a.size(); i++){
    cout << a[i] << " ";

}
cout << endl;

}
void sort01(vector<int>&v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i < j){
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
        if(i > j) break;
        if(v[i] == 1 && v[j] == 0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    display(v);
   
    sort01(v);
    
}