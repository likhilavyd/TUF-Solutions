class Solution {
public:
    void pattern15(int n) {
        for (int i = n; i > 0; i--){
            for (int j = 1; j <= i; j++){
                char word = 64 + j;
                cout << word;
            }
            cout << endl;
        }
    }
};