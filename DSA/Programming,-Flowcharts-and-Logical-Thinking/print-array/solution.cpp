class Solution {
public:
    void printArray(int arr[], int N) {
        // Write your logic here
        for (int i = 0; i < N; i++){
            cout << arr[i];
            if (i != N - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }
};

