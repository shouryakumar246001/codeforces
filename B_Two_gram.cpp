#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    
    map<string, int> count;
    int max_freq = 0;
    string fram = "";
    
    for (int i = 0; i < n - 1; i++) {
    string gram = s.substr(i, 2);
    count[gram]++;
 if (count[gram] > max_freq) {
    max_freq = count[gram];
     fram = gram;
    }
    }
    cout << fram << endl;

    return 0;
}