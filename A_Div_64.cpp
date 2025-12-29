#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int zeros = 0, ones = 0;
    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
}
    
if (zeros >= 6 && ones >= 1) {
        cout << "yes" << endl;
} else {
        cout << "no" << endl;
    }
    return 0;
}
