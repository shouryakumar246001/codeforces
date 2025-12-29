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
    for (int i = 0; i < n; i++) {
         cin >> a[i];
     }
    long long dist = 0;
     for (int i = 0; i < n - 1; i++){
        dist += abs(a[i] - a[i+1]);
     }
    long long total = dist;

    long long current_try = dist - abs(a[0] - a[1]);
 total = min(total, current_try);

current_try = dist - abs(a[n-2] - a[n-1]);
  total = min(total, current_try);
for (int i = 1; i < n - 1; i++) {
 long long saved = abs(a[i-1] - a[i]) + abs(a[i] - a[i+1]);
 long long added = abs(a[i-1] - a[i+1]);
            
current_try = dist - saved + added;
 total = min(total, current_try);
        }

        cout << total << endl;
    }
    return 0;
}