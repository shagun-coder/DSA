//sort 0 s and 1 s
// Method 1
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
}
void sort01(vector<int>&v){
    int n = v.size();
    int noo = 0;
    int noz = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            noz++;
        }
        else{
            noo++;
        }
    
    }
    for(int i = 0; i < n; i++){
    if(i < noz){
        v[i] = 0;
    }
        else{
            v[i] = 1;
    }

}
for(int j = 0; j < n; j++){
    cout << v[j] << " ";
}

}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    display(v);
    cout << endl;
    sort01(v);


}
