class Solution {
public:
    int findMaximum(int nums[], int N) {
        // Your code goes here
        int max_num = nums[0];
        for (int i = 0; i < N; i++){
            if (nums[i] > max_num){
                max_num = nums[i];
            }
        }
        return max_num;
    }

    int findMinimum(int nums[], int N) {
        // Your code goes here
        int min_num = nums[0];
        for (int i = 0; i < N; i++){
            if (nums[i] < min_num){
                min_num = nums[i];
            }
        }
        return min_num;
    }
};