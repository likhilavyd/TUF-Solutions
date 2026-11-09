class Solution {
public:
    void pattern11(int n) {
    for (int i = 0; i <= n-1; i++){
        int s = 1;
        if (i%2) s = 0;
        for (int j = 0; j <= i; j++){
        cout << s << " ";
        s = 1 - s;
    }
    cout << endl;
    }
    }
};