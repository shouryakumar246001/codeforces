#include <iostream>

using namespace std;
bool check(int x, int y) {
if (x > 2 * (y + 1)) return false;
 if (y > 2 * (x + 1)) return false;
    
    return true;
}

void solve() {
int a, b, c, d;
cin >> a >> b >> c >> d;
bool first_half_valid = check(a, b);

 bool second_half_valid = check(c - a, d - b);

 if (first_half_valid && second_half_valid) {
    cout << "YES" << endl;
 } else {
     cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}