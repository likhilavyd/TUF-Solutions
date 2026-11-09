class Solution {
public:
    void printMatrix(int** arr, int N, int M) {
        // Write your logic here
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                cout << arr[i][j];
                if (j == M-1){
                    break;
                }
                cout << " ";
            }
            cout << endl;
        }
    }
};