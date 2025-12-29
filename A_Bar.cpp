#include <bits/stdc++.h>
using namespace std;

set<string> alcohol = {
    "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", 
    "GIN", "RUM", "SAKE", "TEQUILA", 
    "VODKA", "WHISKEY", "WINE"
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int checks = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
bool is_age = true;
 for (char ch : s) {
 if (!isdigit(ch)) {
    is_age = false;
     break;
            } }
        
     if (is_age) {
    int age = stoi(s);
    if (age < 18) {
    checks++; 
            }
        
    } else {
         if (alcohol.count(s)) {
    checks++; 
     }
   }
    }
     cout << checks << "\n";
    return 0;
}
