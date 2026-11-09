class Solution {
public:
    int findMaximum(int arr[], int N) {
        // Write your logic here
        int max_num = arr[0];
        for (int i = 0; i < N; i++){
            if (arr[i] > max_num){
                max_num = arr[i];
            }
        }
        return max_num;
    }

    int findMinimum(int arr[], int N) {
        // Write your logic here
        int min_num = arr[0];
        for (int i = 0; i < N; i++){
            if (arr[i] < min_num){
                min_num = arr[i];
            }
        }
        return min_num;
    }
};