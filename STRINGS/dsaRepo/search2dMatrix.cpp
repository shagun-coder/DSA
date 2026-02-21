//Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

//Integers in each row are sorted in ascending from left to right.
//Integers in each column are sorted in ascending from top to bottom.
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int i = 0, j = cols - 1;

    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) return true;
        else if (matrix[i][j] > target) j--; // move left
        else i++;                            // move down
    }
    return false;
}

int main() {
    int rows, cols;
    cout << "Enter rows and cols: ";
    cin >> rows >> cols;

    // Create a 2D vector with user-defined size
    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter elements row-wise:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    int target;
    cout << "Enter target: ";
    cin >> target;

    if (searchMatrix(matrix, target))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}
