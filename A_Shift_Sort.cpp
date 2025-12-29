#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n>>s ;
        string target =s;
        sort(target.begin(),target.end());
         int ops = 0;
        for (int i = 0; i < n; i++) {
        if (s[i] == '1' && target[i] == '0') {
        ops++;
            }
        }
        cout << ops << '\n';
        
    }
    return 0;
}