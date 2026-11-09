class Solution {
public:
    int* columnSums(int** arr, int N, int M) {
        // Write your logic here
        int* ans = new int[N];
        for (int i = 0; i < M; i++){
            int sum = 0;
            for (int j = 0; j < N; j++){
                sum += arr[j][i];
            }
            ans[i] = sum;
        }
        return ans;
    }
};