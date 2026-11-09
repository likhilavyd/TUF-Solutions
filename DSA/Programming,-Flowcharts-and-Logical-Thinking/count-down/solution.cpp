#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;

    for (int i = N; i >= 1; i--){
        cout << i;
        if (i == 1){
            break;
        }
        else {
            cout << " ";
        }
    }
    return 0;
}