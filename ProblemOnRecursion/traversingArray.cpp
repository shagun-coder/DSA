// // printing array using recursion
// #include <iostream>
// using namespace std;
// void display(int arr[],int n,int idx){
//     if(idx ==n) return;
//     cout << arr[idx] << " ";
//     display(arr,n,idx+1);

// }

// int main(){
//     int arr[] ={1,2,3,4,5,6,7};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     // for(int el:arr){
//     //     cout <<el<<" ";
//     // }
//     display(arr,n,0);
// }

// for vector
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &arr,int idx)
{
    if(idx ==arr.size()) return;
    cout << arr[idx] << " ";
    display(arr,idx+1);
}
int main(){
    vector<int> arr ={1,2,3,4,5,6,7};
    
     
    display(arr,0);
}