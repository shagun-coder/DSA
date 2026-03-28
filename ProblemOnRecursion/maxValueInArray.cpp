


#include <iostream>
#include <vector>
using namespace std;
void PrintMax(int arr[],int size,int idx ,int max){
    if(idx == size) {
        cout <<max;
        return;
    }

    if(max < arr[idx]) max = arr[idx];
    PrintMax(arr,size,idx+1,max);
}

int maxInArray(int arr[],int size ,int idx){
    if(idx==size) return INT_MIN;
    return max(arr[idx], maxInArray(arr,size,idx+1));
}

int main()
{

    int arr[] = {1, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Maximum value in an Array:";
//    PrintMax(arr,n,0,INT_MIN);
    cout <<maxInArray(arr,n,0);
 }
