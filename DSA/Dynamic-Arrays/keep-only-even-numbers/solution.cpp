class Solution {
public:
    vector<int> evenArray(vector<int>& nums) {
       // User code goes here
       int n = nums.size();
       vector<int> result;
        for (int i = 0; i < n; i++){
            if (nums[i]%2 == 0){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};