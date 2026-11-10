class Solution {
public:
    vector<int> removeKElements(vector<int>& nums, int k) {
       // User code goes here
       int n = nums.size();
       int m = n-k;
       vector<int> result;
       for (int i = 0; i < m; i++){
        result.push_back(nums[i]);
       }
       return result;
    }
};