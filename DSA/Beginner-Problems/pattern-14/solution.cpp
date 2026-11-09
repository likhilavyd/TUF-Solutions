class Solution {
public:
    void pattern14(int n) {
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                char word = 64 + j;
                cout << word;
            }
            cout << endl;
        }
    }
};