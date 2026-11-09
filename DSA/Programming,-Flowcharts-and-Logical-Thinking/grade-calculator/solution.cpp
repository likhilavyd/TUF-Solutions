#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int m;
    cin >> m;

    if (m >= 90){
        cout << "A";
    }
    else if (m >= 75){
        cout << "B";
    }
    else if (m >= 60){
        cout << "C";
    }
    else if (m >= 40){
        cout << "D";
    }
    else{
        cout << "F";
    }
    return 0;
}