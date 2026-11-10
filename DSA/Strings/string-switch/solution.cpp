#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    string s;
    cin >> s;

    if (s == "OK"){
        cout << "Success";
    }
    else if (s == "ERROR"){
        cout << "Failure";
    }
    else if (s == "PENDING"){
        cout << "Waiting";
    }
    else {
        cout << "Unknown";
    }
    return 0;
}