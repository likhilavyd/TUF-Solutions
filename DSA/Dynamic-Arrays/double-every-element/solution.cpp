class Solution {
public:
    void doubleArray(vector<int>& nums) {
       // User code goes here
       int n = nums.size();
        for (int i = 0; i < n; i++){
            nums[i] = 2*nums[i];
        }
    }
};