#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int z = 0, one = 0;
        for (char c : s) {
            if (c == '0') z++;
            else one++;
        }
        if (z != one) {
            cout << min(z, one) << endl;
        } else {
            cout << z - 1 << endl;
        }
    }
    return 0;
}
