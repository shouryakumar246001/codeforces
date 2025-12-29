#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        
        if (n <= a) {
            cout << 1 << '\n';
            continue;
        }
        
        long long cycle_sum = a + b + c;
        long long remaining = n - a;
        long long full_cycles = remaining / cycle_sum;
        long long rem_dist = remaining % cycle_sum;
        
        long long days = 1 + 3 * full_cycles;
        
        if (rem_dist <= b) {
            days += 1;
        } else if (rem_dist <= b + c) {
            days += 2;
        } else {
            days += 3;
        }
        
        cout << days << '\n';
    }
    return 0;
}
