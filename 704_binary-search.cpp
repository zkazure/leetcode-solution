#include <bits/stdc++.h>
using namespace std;

// code_start

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        int mid;
        while (left <= right) {
            mid = left + ( (right-left) >> 2);
            if (nums[mid]>target)
                right = mid-1;
            else if (nums[mid]<target)
                left = mid+1;
            else return mid;
        }

        return -1;
    }
};

// code_end

