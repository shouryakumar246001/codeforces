#include <bits/stdc++.h>
using namespace std;

bool between(int a, int b, int x) {
    return (a < x && x < b) || (x > b);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a > b) swap(a,b);
        if(c > d) swap(c,d);
        bool intersect =(between(a,b,c) && !between(a,b,d)) ||
      (between(a,b,d) && !between(a,b,c));
        
        cout << (intersect ? "YES\n" : "NO\n");
    }
}
