#include<iostream>
#include<vector>
using namespace std;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merged;
        int i=0, j=0;
        // Merge two sorted array
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) merged.push_back(nums1[i++]);
            else merged.push_back(nums2[j++]);
        }
        // add remaining of elemenst of nums1
        while(i < nums1.size()){
            merged.push_back(nums1[i++]);
          
        }
        while(j < nums2.size()){
            merged.push_back(nums2[j++]);
        }
        // find median
        int n = merged.size();
        if(n % 2 == 1) return merged[n/2];
        return (merged[n/2 - 1] + merged[n/2]) / 2.0;
    }
int main(){
    vector<int>nums1 ={ 1, 2,3};
    vector<int>nums2 ={ 8 ,5,9};
    double median = findMedianSortedArrays(nums1,nums2);
    cout <<"Median = "<<median << endl;
        
    }
