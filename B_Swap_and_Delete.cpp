#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O for competitive programming speed
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

   long long count0 = 0;
 long long count1 = 0;
   for (char c : s) {
    if (c == '0') count0++;
   else count1++;
      }
  int constructed_len = 0;
        
 for (int i = 0; i < s.length(); i++) {
   if (s[i] == '1') {

    if (count0 > 0) {
      count0--;
  } else {
              
                    break;
                }
 } else {

     if (count1 > 0) {
       count1--;
    } else {
              
        break;
                }
            }
            constructed_len++;
        }
        cout << s.length() - constructed_len << "\n";
    }

    return 0;
}