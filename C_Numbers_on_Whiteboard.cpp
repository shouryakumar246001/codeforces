#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // The minimum possible result is always 2
    cout << "2" << endl;

    // Start with the largest number n
    int a = n;

    // Iterate backwards from n-1 down to 1
    for (int b = n - 1; b >= 1; b--) {
        // 1. Print the pair being merged
        cout << a << " " << b << endl;

        // 2. Calculate the new number (Ceiling division)
        // Formula for ceil(x/y) with integers is (x + y - 1) / y
        // Here, divisor is 2, so: (a + b + 1) / 2
        a = (a + b + 1) / 2;
    }
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}