#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> distinct_char(s.begin(), s.end());
        string r(distinct_char.begin(), distinct_char.end());

        map<char, char> decoder;
        int m = r.length();
        for (int i = 0; i < m; i++) {
            decoder[r[i]] = r[m - 1 - i];
        }
        string res = ""; 
        for (char ch : s) {
            res += decoder[ch];
        }
        
        cout << res << endl;
    }
    return 0;
}