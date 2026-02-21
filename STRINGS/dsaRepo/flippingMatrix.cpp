#include<iostream>
#include<vector>
using namespace std;

    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        // MAKING IST COLUMNS ALL ONE
        for(int i = 0; i < rows;i++){

            if(grid[i][0] == 0){
                for(int j =0; j<cols;j++){
                    if(grid[i][j] == 0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }

            }
        }
           // flip the columns where no of zero is greater than no of columns
           // calculate the noz and noo
        

        for(int j = 0; j<cols; j++){
            int noo = 0;
            int noz = 0;
            for(int i = 0; i<rows; i++){
                if(grid[i][j] == 0) noz++;
                else noo++;     
            }
            // flip the columns where no of zero is greater than no of columns
            if(noz>noo){
                for(int i = 0; i<rows; i++){
                    if(grid[i][j] == 0) grid[i][j] = 1;
                    else grid[i][j] = 0;                      
                }
            }
        }
        
        int sum = 0;
        for(int i = 0; i<rows; i++){
            int x = 1;
            for(int j = cols-1; j >= 0; j--){
                sum += grid[i][j]*x;
                x *= 2;
            }

        }
        return sum;
        
    }
int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    vector<vector<int>> grid(m, vector<int>(n));
    cout << "Enter the matrix elements (0 or 1):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int result = matrixScore(grid);
    cout << "Maximum Score: " << result << endl;

    return 0;
}