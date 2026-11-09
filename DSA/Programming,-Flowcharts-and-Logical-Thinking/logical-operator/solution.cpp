#include <iostream>
#include <string>
using namespace std;

int main() {
    // Your code goes here
    int a, b;
    string op;
 
    cin >> a >> b >> op;
 
    if(op == "&&")
    {
        cout << (a && b);
    }
 
    else
    {
        cout << (a || b);
    }
 
    return 0;
}