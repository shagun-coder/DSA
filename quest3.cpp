// find the elememt x in array .Take array and x as input .
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout <<"Enter size of array :";
    cin >> n;

    int arr[n];
    cout << "Enter array element :";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter x :";
    cin >> x;
    // search
    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            cout << "element is found at index : " << i <<  endl;
        }
    }


}