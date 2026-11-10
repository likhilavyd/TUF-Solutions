#include <iostream>
#include <string>
using namespace std;

int main() {
    // Your code goes here
    string s;
    getline(cin, s);

    try {
        size_t pos;
        int n = stoi(s, &pos);

        if (pos == s.size() && n >= -100 && n <= 100)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }
    catch (...) {
        cout << "Invalid\n";
    }

    return 0;
}