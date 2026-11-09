class Solution {
public:
    int calculateSum(int arr[], int N) {
        // Write your logic here
        int sum = 0;
        for (int i = 0; i < N; i++){
            sum += arr[i];
        }
        return sum;
    }

    double calculateAverage(int arr[], int N) {
        // Write your logic here
        double sum = 0;
        for (int i = 0; i < N; i++){
            sum += arr[i];
        }
        double avg = sum / N;
        return avg; 
    }
};