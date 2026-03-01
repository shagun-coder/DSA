#include <iostream>
#include <vector>
using namespace std;

// function to display vector
void display(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// function to move negative numbers to the beginning
void moveNegative(vector<int>& v) {
    int n = v.size();
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        if (v[i] > 0 && v[j] < 0) {
            // swap
            int temp = v[i];
            v[i] = v[j]; 
            v[j] = temp;
            i++;
            j--;   
        }
        else {
            if (v[i] <= 0) {  // already negative , move forward
                i++;
            }
            if (v[j] > 0) { // already positive, move backward
                j--;
            }
        }
    }
}

int main() {
    vector<int> v = {1, 0, 3, 0, 0, 6, 8};

    cout << "Original vector: ";
    display(v);

    moveNegative(v);

    cout << "After moving negatives: ";
    display(v);

    return 0;
}
