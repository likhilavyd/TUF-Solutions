class Solution {
public:
    void pattern10(int n) {
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                cout << "*";
            }
            cout<< endl;
        }
        for (int p = n; p >= 1; p--){
            for (int t = p-1; t >= 1; t--){
                cout << "*";
            }
            cout << endl;
        }
    }
};