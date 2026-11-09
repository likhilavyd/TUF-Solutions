#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;
    if (N%3 == 0 && N%5 == 0){
        cout << "Both";
    }
    else if (N%5 == 0){
        cout << "Five";
    }
    else if (N%3 == 0){
        cout << "Three";
    }
    else {
        cout << "None";
    }
    return 0;
}