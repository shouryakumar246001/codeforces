#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < n; i++) {
    cin >> x[i];
    }
    sort(x.begin(), x.end());
     int opt = x[0];

    int opt2 = x[1] - x[0];
        cout << max(opt, opt2) << endl;
    }
    return 0;
}