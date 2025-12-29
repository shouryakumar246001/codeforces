#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int ans = 0;
        int i = 0;
        
        while(i < n) {
            while(i + k - 1 < n && a[i] == 1) {
                i++;
            }
        
            bool can_hike = true;
            for(int j = 0; j < k; j++) {
                if(i + j >= n || a[i + j] == 1) {
                    can_hike = false;
                    break;
                }
            }
            
            if(!can_hike) {
                break;
            }
            
            ans++;
            i += k + 1;
        }
        
        cout << ans << '\n';
    }
    return 0;
}
