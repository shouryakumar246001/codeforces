#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;  
vector<long long> a(n);
 vector<long long> pref(n);  
vector<long long> max_pref(n); 
    
 for (int i = 0; i < n; i++) {
cin >> a[i];
if (i == 0) pref[i] = a[i];
else pref[i] = pref[i-1] + a[i];
if (i == 0) max_pref[i] = a[i];
else max_pref[i] = max(max_pref[i-1], a[i]);
    }
 for (int j = 0; j < q; j++) {
 int k;
 cin >> k;
        
 auto it = upper_bound(max_pref.begin(), max_pref.end(), k);
        
int count = it - max_pref.begin(); 
        
     if (count == 0) {
     cout << "0 ";
        } else {
    cout << pref[count - 1] << " ";
    }
    }
cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}