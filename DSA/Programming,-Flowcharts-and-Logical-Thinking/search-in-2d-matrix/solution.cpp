class Solution {
public:
    bool searchMatrix(int** arr, int N, int M, int X) {
        // Write your logic here
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                if (arr[i][j] == X){
                    return true;
                }
            }
        }
        return false;
    }
};