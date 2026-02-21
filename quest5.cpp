#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,23,12 ,123 ,789};
    int max = arr[0];
   
    for(int i = 1 ; i < 5 ; i++){
        if (arr[i] > max){
            max = arr[i];

        }
       

    }
    cout << "Max = " << max << endl;
}
