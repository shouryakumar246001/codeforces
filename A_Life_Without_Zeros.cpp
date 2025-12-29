#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string remove_zeros(string s) {
    string res = "";
    for (char ch : s) {
    if (ch != '0') {
     res += ch;     }
    }
return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a_str, b_str;
    cin >> a_str >> b_str;
    
ll a = stoll(a_str);
 ll b = stoll(b_str);
 ll c = a + b;
string c_str = to_string(c);
    
string A = remove_zeros(a_str);
 string B = remove_zeros(b_str);
 string C = remove_zeros(c_str);
    
    ll X = stoll(A);
    ll Y = stoll(b_str.empty() ? "0" : B);  
    ll Z = stoll(C);
    
    if (X + Y == Z) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
