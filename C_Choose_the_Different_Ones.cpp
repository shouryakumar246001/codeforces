#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
 int n, m, k;
 cin >> n >> m >> k;
vector<bool> has_a(k + 1, false);
vector<bool> has_b(k + 1, false);
        
for (int i = 0; i < n; i++) {
     int val;
            cin >> val;
        if (val <= k) has_a[val] = true;
       }
        
       for (int i = 0; i < m; i++) {
           int val;
          cin >> val;
          if (val <= k) has_b[val] = true;
        }
      int unique_a = 0;
       int unique_b = 0;
      bool possible = true;
      
 for (int i = 1; i <= k; i++) {
     bool in_a = has_a[i];
      bool in_b = has_b[i];
     if (!in_a && !in_b) {
         possible = false;
                break; 
            }
            
     if (in_a && !in_b) unique_a++;
     if (!in_a && in_b) unique_b++;
 }

 if (!possible) {
      cout << "NO" << "\n";
  } else if (unique_a > k / 2 || unique_b > k / 2) {
      cout << "NO" << "\n";
  } else {
      cout << "YES" << "\n";
  }
    }
    return 0;
}