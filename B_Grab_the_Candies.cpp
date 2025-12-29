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
        vector<int> a(n);
        int evenSum = 0, oddSum = 0;
        
    for(int i = 0; i < n; i++) {
     cin >> a[i]; 
     if(a[i] % 2 == 0) {
      evenSum += a[i];
          } else {
         oddSum += a[i];
         }
        }
        if(evenSum > oddSum) {
            cout << "YES\n";  
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
