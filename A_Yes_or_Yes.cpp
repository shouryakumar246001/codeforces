#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
string text;
cin >> text;

     bool found = false;
        for (int i = 0; i < text.length() - 1; i++) {
     if (text[i] == 'Y' && text[i+1] == 'Y') {
     found = true;
      break;
            }
        }

        if (found) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

        t--;
    }
    return 0;
}