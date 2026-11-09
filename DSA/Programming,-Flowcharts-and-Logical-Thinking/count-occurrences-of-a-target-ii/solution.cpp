class Solution {
public:
    int countOccurrences(vector<int>& nums, int target) {
        // Your code goes here
        int cnt = 0;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] == target) {
                cnt += 1;
            }
        }
        return cnt;
    }
};