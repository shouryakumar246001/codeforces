#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int n;
    long long m;
    cin >> n >> m;
    long long current_time = 0;
    int current_side = 0;
    
    long long total_points = 0;

    for (int i = 0; i < n; ++i) {
        long long target_time;
        int target_side;
        cin >> target_time >> target_side;

        long long time_diff = target_time - current_time;
        int side_diff = abs(target_side - current_side);

        if ((time_diff % 2) == side_diff) {
            total_points += time_diff;
        } else {
            total_points += (time_diff - 1);
        }

        current_time = target_time;
        current_side = target_side;
    }

    if (current_time < m) {
        total_points += (m - current_time);
    }

    cout << total_points << endl;
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