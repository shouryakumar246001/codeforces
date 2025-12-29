#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
int n;
cin >> n;

vector<int> x= {1, 0};

for (int k = 2; k <= n; k++) {
        vector<int> next;
    
     for (int x : x) {
         next.push_back((x << 1) | 1);
    }
            
    int limit = (1 << (k - 1));
    for (int i = 0; i < limit; i++) {
        next.push_back(i << 1);
            }    
    x = next;
        }

for (int i = 0; i < x.size(); i++) {
     cout << x[i] << (i == x.size() - 1 ? "" : " ");
        }
cout << "\n";
    }
    return 0;
}