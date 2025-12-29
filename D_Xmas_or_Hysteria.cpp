#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n+1);
        vector<pair<long long, int>> elves;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            elves.emplace_back(a[i], i);
        }
        
        // Sort by attack power (descending)
        sort(elves.rbegin(), elves.rend());
        
        if(m == n) {
            cout << "0\n";
            continue;
        }
        
        if(m == 0) {
            // Kill all elves: n-1 attacks
            vector<pair<int, int>> attacks;
            set<int> alive;
            for(int i = 1; i <= n; i++) alive.insert(i);
            
            for(int i = 1; i <= n-1; i++) {
                auto it = alive.begin();
                int x = *it; alive.erase(it);
                int y = *alive.begin();
                attacks.emplace_back(x, y);
            }
            cout << attacks.size() << '\n';
            for(auto [x, y] : attacks) {
                cout << x << " " << y << '\n';
            }
            continue;
        }
        
        // General case: Keep m strongest alive, use others as attackers
        vector<int> survivors;
        for(int i = 0; i < m; i++) {
            survivors.push_back(elves[i].second);
        }
        
        vector<pair<int, int>> attacks;
        set<int> attackers, victims;
        for(int i = m; i < n; i++) {
            attackers.insert(elves[i].second);
        }
        for(int i = 0; i < m; i++) {
            victims.insert(elves[i].second);
        }
        
        // Each attacker kills one victim (but survivors stay alive due to high health)
        while(!attackers.empty() && !victims.empty()) {
            int x = *attackers.begin(); attackers.erase(attackers.begin());
            int y = *victims.begin(); 
            attacks.emplace_back(x, y);
            // Victim survives due to high health relative to attacker's damage
        }
        
        cout << attacks.size() << '\n';
        for(auto [x, y] : attacks) {
            cout << x << " " << y << '\n';
        }
    }
    return 0;
}
