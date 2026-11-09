#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;

    int lastDigit = 0;
    int num = 0;

    while ( N > 0) {
        lastDigit = N % 10;            
        num = 10*num + lastDigit;
        N /= 10;
    }  
    cout << num;      
    return 0;
}