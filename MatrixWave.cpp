// Program: Matrix Wave Traversal (Row-wise)
// Description: Traverses a matrix in a wave (row-wise) pattern.
// Pattern: 
//   - First row printed left → right
//   - Second row printed right → left
//   - Third row printed left → right
//   - Continues alternately for all rows
// Example: For a 3x3 matrix:
//   1  2  3
//   4  5  6
//   7  8  9
// Output = 1 2 3 6 5 4 7 8 9

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout << "Enter the number of rows:";
    cin>> m;
    cout <<"Enter  the number of columns:";
    cin >> n;
    int arr[m][n];
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            cin >> arr[i][j];
        }
    }
    // wave print
   for(int i = 0; i < m; i++) {         // Loop over each row
    if(i % 2 == 0) {                 // If row index is even
        for(int j = 0; j < n; j++) { // Print elements left to right
            cout << arr[i][j] << " ";
        }
    } else {                          // If row index is odd
        for(int j = n-1; j >= 0; j--) { // Print elements right to left
            cout << arr[i][j] << " ";
        }
    }
}
