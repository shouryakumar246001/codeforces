#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
const vector<int> primes = {
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53
};

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

 for (int p : primes) {
        bool found_coprime = false;
for (long long val : a) {
 if (val % p != 0) {
found_coprime = true;
                break;
            }
        }
        
if (found_coprime) {
cout << p << "\n";
return;
        }
    }
    
cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}