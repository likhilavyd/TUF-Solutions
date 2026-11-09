class Solution {
private:
    void printFromIndex(vector<int>& nums, int i) {
        if (i < 0) {
            cout << '\n';
            return;
        }
 
        cout << nums[i];
 
        if (i > 0) {
            cout << ' ';
        }
 
        printFromIndex(nums, i - 1);
    }

public:
    void printArrayReverse(vector<int>& nums) {
        // Your code goes here
        int n = nums.size();
        printFromIndex(nums, n - 1);
    }
};