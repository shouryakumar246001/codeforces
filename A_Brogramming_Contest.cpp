#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int first = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            first = i;
            break;
        }
    }

    if (first == -1) {
        cout << "0" << endl;
        return; 
    }
    int moves = 1;
    
    for (int i = first; i < n - 1; i++) {
        if (s[i] != s[i+1]) {
            moves++;
        }
    }

    cout << moves << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}