#include <iostream>
#include <string>
#include <cstdio> // For printf

using namespace std;

void solve() {
    string s;
    cin >> s;

    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));

    string period;

    if (h >= 12) {
        period = "PM";
    } else {
        period = "AM";
    }

    if (h == 0) {
        h = 12; 
    } else if (h > 12) {
        h -= 12;
    }
    printf("%02d:%02d %s\n", h, m, period.c_str());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}