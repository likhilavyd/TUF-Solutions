class Solution {
private:
    bool checkFromIndex(vector<int>& nums, int i) {
        int n = nums.size();
        if (i >= n) {
            return true;
        }
        if (nums[i] < nums[i - 1]) {
            return false;
        }
        return checkFromIndex(nums, i + 1);
    }
public:
    bool isSorted(vector<int>& nums){
        // Your code goes here
        return checkFromIndex(nums, 1);
    }
};