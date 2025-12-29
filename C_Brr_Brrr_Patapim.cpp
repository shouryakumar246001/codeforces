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
        vector<vector<int>> G(n + 1, vector<int>(n + 1));

        for (int i = 1; i <= n; ++i) {
     for (int j = 1; j <= n; ++j) {
       cin >> G[i][j];
            }
        }

        vector<int> p(2 * n + 1);
        vector<bool> used(2 * n + 1, false);
        for (int k = 2; k <= 2 * n; ++k) {
            
     for (int i = 1; i <= n; ++i) {
      int j = k - i;
     if (j >= 1 && j <= n) {
          p[k] = G[i][j];
      used[p[k]] = true;
   break; 
                }
            }
        }
        for (int x = 1; x <= 2 * n; ++x) {
            if (!used[x]) {
                p[1] = x;
                break;
            }
        }
        for (int i = 1; i <= 2 * n; ++i) {
     cout << p[i];
                 if (i < 2 * n) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}