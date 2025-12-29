#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(8);
        for (int i = 0; i < 8; i++) {
            cin >> grid[i];
        }
bool found = false;

   for (int i = 0; i < 8; i++) {
            bool allR = true;
    for (int j = 0; j < 8; j++) {
      if (grid[i][j] != 'R') {
  allR = false;
                    break;
                }
            }
            if (allR) {
                cout << 'R' << "\n";
                found = true;
                break;
            }
        }
 if (found) {
      continue; 
     }
   for (int j = 0; j < 8; j++) {
    bool allB = true;
    for (int i = 0; i < 8; i++) {
         if (grid[i][j] != 'B') {
         allB = false;
    break;
                }
         }
            if (allB) {
       cout << 'B' << "\n";
       break;
      }
        }
    }
    return 0;
}
