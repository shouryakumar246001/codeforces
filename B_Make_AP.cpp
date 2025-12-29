#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(int it) {
    ll a, b, c;
    cin >> a >> b >> c;
    
    if (2 * b == a + c) {
        cout << "YES\n";
        return;
    }
    
    if ((2 * b - c) % a == 0) {
        ll k = (2 * b - c) / a;
        if (k >= 1) {
            cout << "YES\n";
            return;
        }
    }
    
    if ((a + c) % (2 * b) == 0) {
        ll k = (a + c) / (2 * b);
        if (k >= 1) {
            cout << "YES\n";
            return;
        }
    }
    
    if ((2 * b - a) % c == 0) {
        ll k = (2 * b - a) / c;
        if (k >= 1) {
            cout << "YES\n";
            return;
        }
    }
    
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    for (int it = 0; it < t; it++) {
        solve(it);
    }
    
    return 0;
}
