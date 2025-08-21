#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout <<"Enter 5 elemets "<< " ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i]; // input 

    }
    cout << "Array elements are = " << endl;
    for(int i = 0; i < 5; i++ ) {
        cout << arr[i] << " "; // output
    }
    return 0;
    
}