#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        
        reverse(a.begin(), a.end());
        
        for (char &ch : a) {
            if (ch == 'p') ch = 'q';
            else if (ch == 'q') ch = 'p';
        }
        
        cout << a << '\n';
    }
    return 0;
}
