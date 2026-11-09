#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    double P, D;
    cin >> P >> D;
    double discount = (P*D)/100;
    double price = P - discount;
    cout << fixed << setprecision(2) << price;
}