class Solution{
public:
    void reverse(int arr[], int N){
        int left = 0;
        int right = N - 1;

        while (left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        } 
        cout << arr;
    }
};
