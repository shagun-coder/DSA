#include<iostream>
using namespace std;
int main(){
    int m;
    cout<< "rows of matrix:";
    cin >> m;
    int n;
    cout<<"columns of matrix:";
    cin >>n;
    int p;
    cout<< "rows of matrix:";
    cin >> p;
    int q;
    cout<<"columns of matrix:";
    cin >>q;
    if(n==p){
        int a[n][m];
        
        cout<<"Enter element of first matrix :";
        for(int i = 0; i<n;i++){
            for(int j = 0; j<m;j++){
                cin >> a[n][m];
            }
        }
        int b[p][q];
        cout<<"Enter element of 2nd matrix :";
        for(int i = 0; i<p;i++){
            for(int j = 0; j<q;j++){
                cin >> b[p][q];
            }
        }
        // resultant matrix....
        int res[m][q];
        for(int i = 0;i<m;i++){
            for(int j = 0; j<q;j++){
                res[i][j] = 0;
                // multiply
                // res[i][j] = a[i][0]*b[j][0]+a[i][1]*b[1][j]+a[i][2]*b[2][j]+....
                for(int k = 0;k<p;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        // print res matrix...
        cout <<"Resultant matrix = ";
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