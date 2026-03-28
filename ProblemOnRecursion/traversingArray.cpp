
//printing array and Recursion using recursion

#include<iostream>
#include<vector>
using namespace std;
void display(int arr[],int n, int idx){
    if(idx== n) return ;
    cout <<arr[idx] <<" ";
    display(arr, n,idx +1);
}

void displayVector(vector<int> &v ,int idx){
    if(idx == v.size()) return;
    cout <<v[idx]<<" ";
    displayVector(v ,idx+1);
}

    int main(){

    int arr[] ={ 1,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Display Array using Recursion :";
    display(arr,n,0);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i] =arr[i];
    }
    cout<<endl;
    cout <<"Display vector using Recursion :";
    displayVector(v,0);
}
