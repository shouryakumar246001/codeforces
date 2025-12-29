#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
int n, k;
vector<int> count(n + 1, 0);
cin >> n >> k;
            
for (int i = 0; i < n; i++) {
     int val;
    cin >> val;
    count[val]++;
}
 int missing_needed = 0;
 for (int i = 0; i < k; i++) {
     if (count[i] == 0) {
         missing_needed++;
                }
 }
 int k_occurrences = count[k];
 cout << max(missing_needed, k_occurrences) << "\n";
        }
    }
    return 0;
}