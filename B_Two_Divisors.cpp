#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;  // Correct: reads each word/line perfectly
        
        vector<char> low, up;
        for(char c : s) {
            if(c == 'b' && !low.empty()) {
                low.pop_back();
            }
            else if(c == 'B' && !up.empty()) {
                up.pop_back();
            }
            else if(islower(c)) {
                low.push_back(c);
            }
            else if(isupper(c)) {
                up.push_back(c);
            }
        }
        
        // Lowercase first, then uppercase (preserves order)
        for(char c : low) cout << c;
        for(char c : up) cout << c;
        cout << '\n';
    }
    return 0;
}
