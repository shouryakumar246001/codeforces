#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    // Read input
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort the array to easily define min and max ranges
    sort(a.begin(), a.end());

    int max_kept = 0;

    // Iterate through all possible start points (min element candidate)
    for (int i = 0; i < n; ++i) {
        // Iterate through all possible end points (max element candidate)
        for (int j = i; j < n; ++j) {
            
            // a[i] is the minimum in this range
            // a[j] is the maximum in this range
            
            // Check if min + max is even
            if ((a[i] + a[j]) % 2 == 0) {
                // Calculate number of elements in this range
                int count = j - i + 1;
                if (count > max_kept) {
                    max_kept = count;
                }
            }
        }
    }

    // Result is total elements minus the maximum number of elements we can keep
    cout << n - max_kept << endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}