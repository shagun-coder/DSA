#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of array = ";
    cin >> n;
    int arr[n];
    

    for(int i = 0; i < 5; i++){
       cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0 ; i < 5 ; i++){
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
}