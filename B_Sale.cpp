#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);  
    for(int i = 0; i < n; i++) {  
        cin >> a[i];
    }
    
    sort(a.begin(), a.end()); 
    
    long long sum = 0;
    for(int i = 0; i < m; i++) {  
        sum += a[i];
    }
    
    cout << -sum << "\n";  
    return 0;
}
