#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (k == 0) {
            cout << 0 << '\n';
        } else if (abs(k) > 1LL * n * p) {
            cout << -1 << '\n';
        } else {
            int ops = (abs(k) + p - 1) / p; 
            cout << ops << '\n';
        }
    }
    return 0;
}
