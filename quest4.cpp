

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