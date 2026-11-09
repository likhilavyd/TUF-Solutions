#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int a, b;
    cin >> a;
    cin >> b;

    if (a > b){
        cout << a;
    }
    else if (b > a){
        cout << b;
    }
    else {
        cout << "Equal";
    }
}