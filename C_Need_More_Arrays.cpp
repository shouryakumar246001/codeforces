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
        for (int &x : a) cin >> x;
        
        int ans = 0;
        int i = 0;
        
        while (i < n) {
          
            int j = i;
            while (j < n && a[j] == a[i] + (j - i)) j++;
            
            ans += (j - i + 1) / 2;
            i = j;
        }
        
        cout << ans << '\n';
    }
    return 0;
}
