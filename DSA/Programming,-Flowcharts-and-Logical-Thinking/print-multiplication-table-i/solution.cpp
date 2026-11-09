#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;

    for (int p = 1; p <= N; p++){
        int t = 0;
        cin >> t;

        for(int i = 1; i <= 10; i++){
            cout << t*i;
            if (i == 10){
                break;
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}