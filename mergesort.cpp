#include <iostream>
#include <vector>
using namespace std;
// function for sorting array
vector<int> merge(vector<int>&arr1,vector<int>&arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int>res(m+n);
    int i = 0; // arr1
    int j = 0; //arr2
    int k = 0; //arr3
    while(i <= n-1 && j <= m-1){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
            //k++;
        }
        else{ // arr2[j]<arr1[i]
            res[k] = arr2[j];
            j++;
            //k++;
        }
        k++;
    }
    // for remaining elements......
    if(i == n){ // all elements of arr1 are filled in res
        while(j<=m-1){
            res[k] = arr2[j];
            k++;
            j++;
        }

    }
    if(j == m-1){ // all elements of arr2 are filled in res
        while(i <= n-1){
            res[k] = arr1[i];
            k++;
            i++;
        }
    }
    return res;

}
int main(){
    vector<int>arr1 = {1,4,5,6,8};
    cout <<"Array 1 = ";
    for(int i = 0;i<arr1.size();i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    vector<int>arr2 = {2,3,9,7,10,12};
    cout << "Array 2 = ";
    for(int i = 0;i<arr2.size();i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Merged sorted array = ";
    vector<int>v = merge(arr1,arr2);
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
    
}