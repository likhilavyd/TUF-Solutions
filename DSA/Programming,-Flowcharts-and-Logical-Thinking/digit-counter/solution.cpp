#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;

    int cnt = 0;
    if (N == 0){
        cnt = 1;
    }
    
    while (N > 0){
        cnt += 1;
        N /= 10;
    }
    cout << cnt;
    return 0;
}