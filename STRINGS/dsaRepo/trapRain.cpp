#include <iostream>
#include <vector>
#include <algorithm>   // for max(), min()
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> lmax(n, 0), rmax(n, 0);

        // left max array
        lmax[0] = height[0];
        for (int i = 1; i < n; i++) {
            lmax[i] = max(lmax[i - 1], height[i]);
        }

        // right max array
        rmax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rmax[i] = max(rmax[i + 1], height[i]);
        }

        // calculate trapped water
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += min(lmax[i], rmax[i]) - height[i];
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> height = {4, 2, 0, 3, 2, 5};

    int result = sol.trap(height);

    cout << "Trapped rain water = " << result << endl;

    return 0;
}