#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    string target = "hello";
    int idx = 0;
    
    for (char ch : s) {
        if (ch == target[idx]) {
            idx++;
            if (idx == 5) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    
    cout << "NO\n";
    return 0;
}
