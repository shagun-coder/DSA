#include<iostream>
#include<vector>
using namespace std;
int main(){
    // way to give input to vectors
    vector<int> v;

    for(int i = 0; i < 5; i++){ // we cnnot write here v.size
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < 5; i++){
        cout << v[i] << " ";
    }

}

