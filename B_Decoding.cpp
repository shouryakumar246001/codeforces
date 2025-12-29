#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n >> s;
    
    deque<char> dq;  
    
    for (int i = n - 1; i >= 0; i--) {
        int len = dq.size();
        int pos;
        
        if (len % 2 == 1) {

            pos = len / 2;
        } else {
            pos = len / 2;
        }
        
    dq.insert(dq.begin() + pos, s[i]);
    }
    for (char c : dq) {
        cout << c;
    }
    cout << "\n";
    
    return 0;
}
