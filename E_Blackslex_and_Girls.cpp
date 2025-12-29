#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
int n;
long long x, y;
cin >> n >> x >> y;

 string s;
 cin >> s;

 vector<long long> p(n);
        for (int i = 0; i < n; i++) {
     cin >> p[i];
 }

long long rx = 0, ry = 0;
long long gapA = 0, gapB = 0;
bool awin = false, bwin = false;

 for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
        awin = true;
        long long b = (p[i] - 1) / 2;
        long long a = p[i] - b;
         rx += a;
        ry += b;
         gapA += (a - b - 1);
      } else {
         bwin = true;
         long long a = (p[i] - 1) / 2;
         long long b = p[i] - a;
         rx += a;
         ry += b;
         gapB += (b - a - 1);
            }
        }

 if (rx > x || ry > y) {
    cout << "NO" << endl;
    continue;
        }

 long long remX = x - rx;
 long long remY = y - ry;

if (!awin) {
     if (remX > remY + gapB) {
         cout << "NO" << endl;
          continue;
            }
        }

if (!bwin) {
    if (remY > remX + gapA) {
        cout << "NO" << endl;
         continue;
            }
        }

        cout << "YES" << endl;
    }
    return 0;
}