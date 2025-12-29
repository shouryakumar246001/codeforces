#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    // Ensure x is the smaller value and y is the larger
    if (x > y) swap(x, y);

    // Condition 1: One value must be 0, the other > 0
    // If x > 0 (meaning both are > 0), it's impossible because losers have 0 wins.
    // If y == 0 (meaning both are 0), it's impossible.
    if (x != 0 || y == 0) {
        cout << -1 << endl;
        return;
    }

    // Condition 2: The total games (n-1) must be divisible by the win streak y.
    if ((n - 1) % y != 0) {
        cout << -1 << endl;
        return;
    }

    // Construct the sequence
    // We iterate through the opponents.
    // The loop variable 'k' represents the index of the "challenger" starting a new block.
    for (int k = 2; k <= n; k += y) {
        int winner;
        if (k == 2) {
            winner = 1; // Player 1 starts as the king
        } else {
            winner = k; // The challenger defeats the previous king and takes over
        }

        // Print this winner 'y' times
        for (int j = 0; j < y; j++) {
            cout << winner << " ";
        }
    }
    cout << endl;
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}