// declaration 
// #include<iostream>
// using namespace std;
// int main(){
// //  store 5 elements
    // int arr[5]; // syntax and declaration
    // cout << "Enter array elements : ";
    // for(int i = 0; i <= 5; i++){  // input
    //     cin >> arr[i];
    // }
    // cout << "Entered elements are = ";
    // for(int i = 0; i <= 5; i++){
    //     cout  << arr[i] << " ";
    // }
    // arr[0] = 100;
    // cout << endl;
    // for(int i = 0; i <= 5; i++){
    //     cout << arr[i] << " ";
    // }
    //    int arr[5] = {45 , 56 , 67, 78, 89}; // dec and initiasation
    //    // output
    //    for(int i = 0; i <= 5; i++){
    //     cout << arr[i] * 2 << " ";
    //    }
       

//}
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main(){

   int n;
   cout << "Enter number of students = ";
   cin >> n;
   int marks[n];   // 0  to n -1
   cout << "Enter marks of student = ";

   for(int i = 0; i<=5; i++){
   cin >> marks[i];
   }
   int countless35 = 0;
   for(int i = 0; i <= n-1; i++){
    if(marks[i] < 35){
       countless35++;
    }
   }
    cout <<  "Roll no. of student less than 35 " << countless35 << " ";
  
}