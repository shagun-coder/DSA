// always by pass by refrence

#include<iostream>
using namespace std;
void display(int a[] ,int size){
   int size = sizeof(a)/sizeof( a[0]);
   for(int  i = 0; i < size; i++){
    cout << a[i] << " ";
   }
   cout << endl;
   return;
}

void change(int b[],int size){ // b ak pointer hai... or we can write int*a;
    b[0] = 100;
}
int main(){
    int arr[5] = {1, 2,3,4,5,};
    int size = sizeof(arr)/sizeof( arr[0]);
    // acessing the elements of array in another fn
    //updation pass by value/refrence ?
    display(arr,size);
    change(arr,size);
    display(arr,size);


}
//     int arr[] = {5, 8, 9 , 0, 56,45,67};
//     int n = sizeof(arr)/4;
//     cout << "size of array = "<< sizeof(arr)<< endl;
//     cout << "no of elements in array = "<< sizeof(arr)/4<< endl;
//     cout << "Array elements are = " << " ";
   
//     int sum = 0;
//     for(int i= 0 ; i < n; i++ ){
//         cout << arr[i] << " ";
//         sum += arr[i];
        

//     }
//     cout << endl;
//     cout << "Sum of array are = " << sum ;
// }

// CALCULATE THE PRODUCT OF ALL ELEMENTS IN TEH ARRAY....................
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = { 4 , 5 ,6 ,7 ,8};
//     int n; // size of array 
//     int product = 1;
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//         product *= arr[i];

//     }
//     cout << "Product of array are = " << product ;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MAX VALUE IN ARRAY .................
    // int arr[] = { 4 , 5 ,6 ,7 ,8};
    // int n;
    // int mx = INT_MIN; // -1 // arr[0]
    // for(int i = 1; i < n; i++){
    //     if(arr[i] > mx){
    //         mx = arr[i]; // update
    //         // OR
    //         mx = max(mx , arr[i]);
    //     }

    // }
    // cout << "Maximum in array = " << mx;

    //////////////////////////////////////////////////////////////////////////////////////////////////
    // MIN VALUE IN ARRAY 
    // int arr[] = { 4 , 5 ,6 ,7 ,8};
    // int n;
    // int mn = arr[0]; // INT_MAX
    // for(int i = 1; i < n; i++){
    //     if(arr[i] < mn){
            
    //         // mn = arr[i]; // update
    //         //or
    //         // mn = min(mn,arr[i]);
    //     }
    // }
    // cout << "Minimum in array = " << mn;
       
   
    
//}


// GIVEN AN INTEGER N.CREATE AN ARRAY CONTAINING SQUARES OF ALL NUMBERS TILL N  AND PRINTS THE ELEMENTS OFF AN ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n =";
//     cin >> n;
//     int arr[n] = { 1, 2,3,4,5,6,7};
   
//     for(int i = 0; i < n ; i++){
//         cout << arr[i] *arr[i]<< " ";
        
//     }

// }

