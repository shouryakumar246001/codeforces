#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<long long> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            // Step 1: Precompute Prefix Minimums and their Cumulative Sums
            vector<long long> P(n); // Stores prefix minimums
            vector<long long> S(n); // Stores sum of prefix minimums
            
            long long current_min = a[0];
            long long current_sum = 0;
            
            for (int i = 0; i < n; i++) {
                if (a[i] < current_min) {
                    current_min = a[i];
                }
                P[i] = current_min;
                current_sum += P[i];
                S[i] = current_sum;
            }

            // Start with the answer being the case where we do NO operations
            long long min_total_sum = S[n-1];

            // Step 2: Try performing the operation for every possible j (from 1 to n-1)
            // We optimally choose i = j-1 to minimize disruption to earlier prefixes.
            for (int j = 1; j < n; j++) {
                long long cost = 0;
                
                // Calculate the new value at index j-1
                long long new_val = a[j-1] + a[j];
                
                if (j == 1) {
                    // Special case: if we zero out a[1], we only have the modified a[0] left.
                    cost = new_val; 
                } else {
                    // General case:
                    // 1. Sum up to j-2 remains unchanged (S[j-2])
                    // 2. The term at j-1 becomes min(prev_min, new_val)
                    long long prev_min = P[j-2];
                    long long new_term = min(prev_min, new_val);
                    cost = S[j-2] + new_term;
                }
                
                // Note: All terms from j onwards are 0, so we don't add anything else.
                
                if (cost < min_total_sum) {
                    min_total_sum = cost;
                }
            }

            cout << min_total_sum << "\n";
        }
    }
    return 0;
}