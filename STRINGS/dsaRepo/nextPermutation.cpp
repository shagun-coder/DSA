//A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
//For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
//The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).
//For example, the next permutation of arr = [1,2,3] is [1,3,2].

#include <iostream>
#include <vector>
using namespace std;

// Simple reverse function
void myReverse(vector<int>& nums, int l, int r) {
    while(l < r) {
        swap(nums[l], nums[r]);
        l++;
        r--;
    }
}

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int idx = -1;

    // find pivot
    for(int i = n-2; i >= 0; i--) {
        if(nums[i] < nums[i+1]) {
            idx = i;
            break;
        }
    }

    if(idx == -1) {   // last permutation
        myReverse(nums, 0, n-1);
    } else {
        // find rightmost bigger element
        int j = -1;
        for(int i = n-1; i > idx; i--) {
            if(nums[i] > nums[idx]) {
                j = i;
                break;
            }
        }
        swap(nums[idx], nums[j]);           // swap
        myReverse(nums, idx+1, n-1);        // reverse suffix
    }

    // 🔹 print result here
    for(int x : nums) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v = {1,2,3,4,5};
    nextPermutation(v);   // printing happens inside the function
    return 0;
}