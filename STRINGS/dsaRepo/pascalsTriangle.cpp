#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m = 5;
    vector<vector<int>> v;
    // resize each row
    for (int i = 1; i <= 5; i++) { //
       vector<int>a(i);
       v.push_back(a); // add rows
    }

    // generate Pascal's triangle
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1; 
            } else {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }

    // print
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}