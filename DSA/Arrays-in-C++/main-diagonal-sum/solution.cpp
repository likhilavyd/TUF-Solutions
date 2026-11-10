class Solution {
public:
    int mainDiagonalSum(int** arr, int N) {
        // Write your logic here
        int sum = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (i == j){
                    sum += arr[i][j];
                }
            }
        }
        return sum;
    }
};