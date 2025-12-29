#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    long long mx = -4e18;
    long long ab = 0;
    long long p = 0;

    for (int i = 0; i < n; i++) {
    p += a[i];
        long long r = s - p;
        long long cur;
        
        if (i == 0) {
            cur = -r;
        } else {
            cur = a[0] + ab - r;
            ab += abs(a[i]);
        } 
        if (cur > mx) mx = cur;
    }
    cout << mx << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}