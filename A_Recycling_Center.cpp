#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, c;
   cin >> n >> c;
 vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long mult = 1;
        int coins = 0;

        for (int i = 0; i < n; ++i) {
            long long weight = a[i] * mult;
            if (weight > c) {
                coins++;
            }
            mult *= 2;
        }

        cout << coins << "\n";
    }

    return 0;
}
