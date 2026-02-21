// Program: Matrix Multiplication
// Description: Multiplies two matrices if dimensions are valid.
// Condition: If first matrix is of size (m x n) and second is (p x q),
//            then multiplication is possible and result will be (m x q).
// Example:
// Matrix A (2x3) × Matrix B (3x2) = Result Matrix (2x2)
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<< "rows of first matrix:";
    cin >> m;
    int n;
    cout<<"columns of second matrix:";
    cin >>n;
    int p;
    cout<< "rows of 2nd matrix:";
    cin >> p;
    int q;
    cout<<"columns of 2nd matrix:";
    cin >>q;

    if(n==p){
        int a[m][n];
        
        cout<<"Enter element of first matrix :";
        for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
                cin >> a[i][j];   
            }
        }

        int b[p][q];
        cout<<"Enter element of 2nd matrix :";
        for(int i = 0; i<p;i++){
            for(int j = 0; j<q;j++){
                cin >> b[i][j];  
            }
        }

        // resultant matrix....
        int res[m][q];
        for(int i = 0;i<m;i++){
            for(int j = 0; j<q;j++){
                res[i][j] = 0;
                // multiply
                for(int k = 0;k<n;k++){  
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }

        // print res matrix...
        cout <<"Resultant matrix = \n";
        for(int i = 0;i<m;i++){
            for(int j = 0; j<q;j++){
                cout << res[i][j]<<" ";
            }
            cout<< endl;
        }
    }
    else{
        cout <<"matrixes can not be multilied!";
    }
}
