class Solution {
private:
    //Recursive function to print one element, then continue from the next index.
    void printFromIndex(vector<int>& nums, int i) {
        int n = nums.size();
 
        // Stop after the final element and print a newline.
        if (i == n) {
            cout << '\n';
            return;
        }
 
        // Print the element at the current index.
        cout << nums[i];
 
        // Print a space only when another element remains.
        if (i < n - 1) {
            cout << ' ';
        }
 
        // Move to the next index using a recursive call.
        printFromIndex(nums, i + 1);
    }
    
public:
    void printArray(vector<int>& nums) {
        // Your code goes here
        printFromIndex(nums, 0);
    }
};