#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, x, y;
        cin >> a >> x >> y;
        int mn = min(x, y);
        int mx = max(x, y);
        
        // Bob wins if Alice is outside [x,y] segment
        if(a < mn || a > mx) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
