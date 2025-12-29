#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
if (n % 7 == 0) {
cout << n << endl;
 continue;
     }
for (int d = 0; d < 10; d++) {
    int num = (n / 10) * 10 + d;
        if (num % 7 == 0) {
            cout << num << endl;
             goto next;
            }
        }
    for (int d = 1; d < 10; d++) {
         int num = d * 100 + (n % 100);
            if (num % 7 == 0) {
            cout << num << endl;
                goto next;
         }
     }
        
     next:;
    }
 return 0;
}
