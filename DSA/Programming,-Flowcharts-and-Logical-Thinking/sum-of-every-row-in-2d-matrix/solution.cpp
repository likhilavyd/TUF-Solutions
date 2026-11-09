class Solution {
public:
    int* rowSums(int** arr, int N, int M) {
        //your code goes here
        int* ans = new int[N];
        for (int i = 0; i < N; i++){
            int sum = 0;
            for (int j = 0; j < M; j++){
                sum += arr[i][j];
            }
            ans[i] = sum;
        }
        return ans;
    }
};