class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        // Your code goes here
        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
};