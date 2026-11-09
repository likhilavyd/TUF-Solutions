class Solution {
public:
    void reverseArray(int nums[], int N) {
        // Your code goes here
        int left = 0;
        int right = N - 1;

        while (left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
        } 
        cout << nums;
    }
};