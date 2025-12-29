#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        bool ok = false;
        if (sum == n) ok = true;      
        for (int i = 1; i < n && !ok; ++i) { 
            if (a[i] == 0 && a[i - 1] == 0)
                ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
