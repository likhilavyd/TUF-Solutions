#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;
    if (N>0){
        cout << "Positive";
    }
    else if (N<0){
        cout << "Negative";
    }
    else{
        cout << "Zero";
    }
    return 0;
}