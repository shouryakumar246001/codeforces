#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long l, r, a; 
        cin >> l >> r >> a;
 long long ans1 = (r/a) + (r % a);

long long x2 = (r / a) * a - 1;
long long ans2 = -1;
if (x2 >= l) {
ans2 = (x2 / a) + (x2 % a);
        }
cout << max(ans1, ans2) << endl;
    }
    return 0;
}