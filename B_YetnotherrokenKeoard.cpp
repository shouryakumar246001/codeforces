#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> lower_idx, upper_idx;
 
    vector<bool> removed(n, false);

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'b') {
            removed[i] = true;
            if (!lower_idx.empty()) {
                removed[lower_idx.back()] = true;
                lower_idx.pop_back();
            }
        } else if (s[i] == 'B') {
            removed[i] = true;
            if (!upper_idx.empty()) {
                removed[upper_idx.back()] = true;
                upper_idx.pop_back();
            }
        } else {
            if (islower(s[i])) {
                lower_idx.push_back(i);
            } else {
                upper_idx.push_back(i);
            }
        }
    }

    string result = "";
    for (int i = 0; i < n; ++i) {
        if (!removed[i]) {
            result += s[i];
        }
    }
    cout << result << "\n";
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}