#include <iostream>
#include <string>

using namespace std;

int main() {
   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0;
    int y = 0;
    int coins = 0;
    if (s[0] == 'U') {
        y++;
    } else {
        x++;
    }
int current_side = (x < y) ? 1 : -1;

for (int i = 1; i < n; i++) {
 if (s[i] == 'U') {
    y++;
  } else {
    x++;
        }

if (x != y) {
 int new_side = (x < y) ? 1 : -1;
  if (new_side != current_side) {
  coins++;
  current_side = new_side;
            }
        }
    }

    cout << coins << endl;

    return 0;
}