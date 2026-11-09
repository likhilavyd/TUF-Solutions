#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int a, b;
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return 0;
}