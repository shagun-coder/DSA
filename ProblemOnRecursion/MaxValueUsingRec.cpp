// maximum value uisng recursion
#include <iostream>
using namespace std;
void printMax(int arr[],int n,int max,int idx){
    if(idx == n) {
        cout <<max;
        return;
    }
    if(max<arr[idx]) max = arr[idx]; 
    
   
    printMax(arr,n,max,idx+1);
}
int maxInArray(int arr[],int n,int idx){
    if(idx == n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
    int arr[] = {1, 2, 3, 4, 4, 5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxInArray(arr,n,0);
}