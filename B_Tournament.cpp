#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int val_j = a[j - 1];
    
    bool greater = false;
    for (int x : a) {
        if (x > val_j) {
            greater = true;
            break;
        }
    } 
    if (greater && k == 1) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}