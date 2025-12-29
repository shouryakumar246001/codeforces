#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
     cin >> a[i];
    sum += a[i];
    }
    long long target = (9LL * n + 1) / 2;  
    
    if (sum >= target) {
        cout << 0 << endl;
        return 0;
    }
    sort(a.begin(), a.end());
    int k = 0;
    while (sum < target) {
        sum -= a[k];
        sum += 5;        
        k++;
    }
cout << k << endl;
 return 0;
}
