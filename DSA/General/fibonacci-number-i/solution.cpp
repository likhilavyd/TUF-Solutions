#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    int N;
    cin >> N;

    int previous = 0;
    int current = 1;
 
    for (int step = 0; step < N; step++) {
        int next = previous + current;

        previous = current;
        current = next;
    }
    cout << previous;
    return 0;
}