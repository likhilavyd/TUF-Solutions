class Solution {
public:
    int countTarget(const vector<int>& arr, int target) {
        // Write your code here
        int cnt = 0;
        for (int i = 0; i < (int)arr.size(); i++) {
            if (arr[i] == target) {
                cnt += 1;
            }
        }
        return cnt;
    }
};