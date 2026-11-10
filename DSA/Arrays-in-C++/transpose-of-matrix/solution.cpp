class Solution {
public:
    int** transpose(int** arr, int N, int M) {
        // Write your logic here
        int** result = new int*[M];
        for (int i = 0; i < M; i++) {
            result[i] = new int[N];
        }   
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                result[j][i] = arr[i][j];
            }
        }
        return result;
    }
};