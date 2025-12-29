#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    if (sum % 2 == 0) {
        cout << 0 << '\n';
        return;
    }

    long long ans = LLONG_MAX; 

    for (auto x : v) {
        long long cnt = 0;
        if (x % 2 != 0) {
        
            while (x % 2 != 0) {
                x /= 2;
                cnt++;
            }
        } else {
            while (x % 2 == 0) {
                x /= 2;
                cnt++;
            }
        }
        ans = min(ans, cnt);
    }

    cout << ans << '\n';
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

