// second largest number
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
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > smax && arr[i] != max ){
            smax = arr[i];
        }
    }
    cout <<"Largest number in the array : " << max << endl; 
    cout << "Second largest number in the array : " << smax <<endl;


}
