class Solution {
public:
    void printList(vector<int>& arr) {
        // Write your code here
        int n = arr.size();
        for (int i = 0; i < n; i++){
            cout << arr[i];
            if (i == n-1){
                break;
            }
            cout << " ";
        }
    }
};