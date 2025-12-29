#include <iostream>
#include <algorithm>
#include <numeric> // For std::gcd in C++17

using namespace std;
long long get_gcd(long long a, long long b) {
while (b) {
a %= b;
swap(a, b);
    }
return a;
}

void solve() {
 long long a, b, k;
cin >> a >> b >> k;

long long g = get_gcd(a, b);

long long max_dist = max(a, b);
    
long long min_required_n = (max_dist + k - 1) / k;

if (g >= min_required_n) {
        cout << 1 << "\n";
} else {
        cout << 2 << "\n";
    }
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