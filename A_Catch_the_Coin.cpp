#include <iostream>

using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
while (n--) {
int x, y;
cin >> x >> y;
        if (y >= -1) {
         cout <<"YES"<<"\n";
        } else {
            cout <<"NO"<<"\n";
        }
    }
    return 0;
}