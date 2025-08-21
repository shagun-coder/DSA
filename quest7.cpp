#include<iostream>
using namespace std;
int main(){

    int n ;
    cout <<"Enter size of array :";
    cin >> n;

    int arr[n];
    cout << "Enter array element : "<< " ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    int x; 
    cout << "enter x = ";
    cin >> x;

   
    for(int i = 0; i < n; i++){
        if(arr[i]>x)
        count ++;
    }
    cout << "element greater than x ="<<count;
}