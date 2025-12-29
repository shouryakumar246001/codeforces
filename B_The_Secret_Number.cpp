#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
long long n;
 cin >> n;
        
 set<long long> solutions;
long long pow10 = 10;
        
for (int k = 1; k <= 18; k++) {
 long long d = pow10 + 1;
if (d > n) break;
            
if (n % d == 0) {
solutions.insert(n / d);
 }
 pow10 *= 10;
 }
        
 if (solutions.empty()) {
  cout << "0\n";
} else {
      cout << solutions.size() << '\n';
            for (auto x : solutions) {
                cout << x << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
