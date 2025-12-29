#include <iostream>
using ll = long long;
using namespace std;
int main() {
 ios::sync_with_stdio(false);
 cin.tie(NULL);
 int t;
cin >> t;
while (t--) {
        ll n, k;
        cin >> n >> k;
    if (n < k) {
    cout << k - n << "\n";
        } else {
            cout << (n - k) % 2 << "\n";
        }
    }
    return 0;
}
