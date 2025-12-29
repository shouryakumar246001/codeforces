#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    map<string, int> count;
    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;
        count[team]++;
    }

    string winner;
    int max_goals = 0;
    for (auto& p : count) {
     if (p.second > max_goals) {
        max_goals = p.second;
    winner = p.first;
        }
    }
    
    cout << winner << "\n";
    return 0;
}
