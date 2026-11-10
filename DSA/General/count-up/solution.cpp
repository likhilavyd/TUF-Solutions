#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++){
        cout << i;
        if (i == N){
            break;
        }
        else {
            cout << " ";
        }
    }
    return 0;
}