#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;

    int sum = 0;
    if ( N == 0){
        sum = 0;
    }
    while (N > 0){
        int p = N % 10;
        sum += p;
        N /= 10;
    }
    cout << sum;
    return 0;
}