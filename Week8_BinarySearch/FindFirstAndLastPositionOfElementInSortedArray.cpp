class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return vector<int> { findLeft(nums,target), findRight(nums,target) };
    }
    
    int findLeft(vector<int>& nums, int target) {
        int idx = -1;
        int beg = 0;
        int end = nums.size() - 1;
        while (beg <= end)
        {
            int mid = beg + (end - beg) / 2;
            if (nums[mid] == target)
            {
                idx = idx == -1 ? mid : min(idx, mid);
                end = mid - 1;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                beg = mid + 1;
            }
        }
        
        return idx;
    }
    
    int findRight(vector<int>& nums, int target) {
        int idx = -1;
        int beg = 0;
        int end = nums.size() - 1;
        while (beg <= end)
        {
            int mid = beg + (end - beg) / 2;
            if (nums[mid] == target)
            {
                idx = idx == -1 ? mid : max(idx, mid);
                beg = mid + 1;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                beg = mid + 1;
            }
        }
        
        return idx;
    }
};
