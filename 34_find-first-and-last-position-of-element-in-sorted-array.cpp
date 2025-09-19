#include <vector>
using namespace std;

// code_start

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        int mid;
        while (right >= left) {
            mid = left + ( (right-left) >> 1 );
            if (target>nums[mid])
                left = mid+1;
            else if (target<nums[mid])
                right = mid-1;
            else {
                int tmp = mid;
                while (nums[left]<target) {
                    mid = left + ( (mid-left) >> 1);
                    if (nums[mid] < target)
                        left = mid+1, mid=tmp;
                    else if (mid-1<0 || nums[mid-1]!=target)
                        left = mid;
                }
                mid = tmp;
                while (nums[right]>target) {
                    mid = mid + ( (right-mid)>>1 );
                    if (nums[mid] > target)
                        right = mid-1, mid=tmp;
                    else if (mid+1>=nums.size() || nums[mid+1]!=target)
                        right = mid;
                }
                return vector<int> {left, right};
            }
        }

        return vector<int>{-1, -1};
    }
};

// code_end

int main() {
    vector<int> test1 = {0, 0, 1, 2, 3, 3, 4};
    Solution s;
    vector<int> a = s.searchRange(test1, 2);

    return 0;
}
