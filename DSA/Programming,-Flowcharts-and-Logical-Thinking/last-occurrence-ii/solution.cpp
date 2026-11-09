class Solution {
public:
    int lastOccurrence(vector<int>& nums, int target) {
        // Your code goes here
        int ans = -1;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] == target) {
                ans = i;
            }
        }
        return ans;
    }
};