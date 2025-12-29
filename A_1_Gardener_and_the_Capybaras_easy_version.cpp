#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        
        bool found = false;
        for(int i = 1; i <= n-2; i++) {  // FIXED: i <= n-2
            if(s[i] == 'a') {
                cout << s.substr(0, i) << " a " << s.substr(i+1) << "\n";
                found = true;
                break;
            }
        }
        
        if(!found) {
            cout << s[0] << " " << s.substr(1, n-2) << " " << s[n-1] << "\n";
        }
    }
    return 0;
}
