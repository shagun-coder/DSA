#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,6,7,8};
    int *ptr =  arr;
    
    // for(int i = 0; i < 6; i++){
    //     cout <<ptr[i] << " " ;

    // }
    for(int i = 0; i < 6; i++){
     
    cout <<*ptr << " ";
    ptr++;
    }
    cout << endl;
    ptr = arr;
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--; 
     for(int i = 0; i < 6; i++){
     
        cout <<*ptr << " ";
        ptr++;
     }       


    // another wy to print ar
    //  for(int i = 0; i < 6; i++){
     
    //     cout <<*ptr << " ";
    //     ptr++;
    // }

    


   

}