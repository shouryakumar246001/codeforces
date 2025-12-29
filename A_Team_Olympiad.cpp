#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;  // NO t!
    
    vector<int> prog, math, sports;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        if(x == 1) prog.push_back(i);
        else if(x == 2) math.push_back(i);
        else sports.push_back(i);
    }
    
    int win = min({(int)prog.size(), (int)math.size(), (int)sports.size()});
    cout << win << '\n';
    
    for(int i = 0; i < win; i++) {
        cout << prog[i] << " " << math[i] << " " << sports[i] << '\n';
    }
    
    return 0;
}
