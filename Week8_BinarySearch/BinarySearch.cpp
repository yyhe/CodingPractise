class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0)
        {
            return -1;
        }
        
        int beg = 0;
        int end = nums.size() - 1;
        while (beg <= end)
        {
            int mid = beg + (end - beg) / 2;
            if (nums[mid] == target)
            {
                return mid;
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
        
        return -1;
    }
};
