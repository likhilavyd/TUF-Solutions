class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        // Your code goes here
        int minNum = *min_element(nums.begin(), nums.end());
        
        int digitSum = 0;
        
        while (minNum > 0) {
            digitSum += minNum % 10; 
            minNum /= 10; 
        }
 
        return (digitSum % 2 == 0) ? 1 : 0;
    }
};