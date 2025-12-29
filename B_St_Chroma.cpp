#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    // Special case: if x equals n, simply output 0 to n-1.
    // However, the general logic below handles x=n naturally 
    // if we just check bounds, but let's be explicit for clarity.
    if (x == n) {
        for (int i = 0; i < n; i++) {
            cout << i << (i == n - 1 ? "" : " ");
        }
        cout << endl;
        return;
    }

    // Part 1: Print numbers 0 to x-1
    for (int i = 0; i < x; i++) {
        cout << i << " ";
    }

    // Part 2: Print numbers x+1 to n-1
    for (int i = x + 1; i < n; i++) {
        cout << i << " ";
    }

    // Part 3: Print x (last)
    cout << x << endl;
}

int main() {
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