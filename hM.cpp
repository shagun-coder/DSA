//GIVEN AN ARRAY OF INTEGER ,CHANGE THE VALUE OFodd ALL INDEXES ELEMENT TO ITS SECONND MULTIPLE AND INCREMENT ALL EVEN INDEXEED VALUE BY 10
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int arr[] = {1, 2, 3,4, 5, 6,7 ,8};
//     for(int i = 0; i < n; i++){
//         if(i % 2 != 0){
//             cout << arr[i]*2 << " ";
//         }
//         if(i % 2 == 0){
//             cout << arr[i] + 10 << " ";
//         }
//     }


// }

// CALCULATE THE NUMBER OF ELEMENT IN GIVEN ARRAY GREATER THAN GIVEN NUMBER X
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[10] = {1, 2 ,3,4,5,6,8,9 ,0};
    int x = 4;
    int count = 0;
    for(int i = 0; i < n; i++){
       if(arr[i] > x){
        count ++;
        }
    }
    cout <<"Number of all elements greater then x :"<< count << endl ;
}