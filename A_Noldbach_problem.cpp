#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; 
    cin >> n >> k;

    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i*i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i*i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    vector<int> primes;  
    for (int i = 2; i <= n; i++) {  
        if (is_prime[i]) primes.push_back(i);
    }
    
    int count = 0; 
    
    for (int i = 1; i < primes.size(); i++) {
        int prev = primes[i-1];
        int next = primes[i];
        int target = prev + next + 1;
        
        if (target <= n && is_prime[target]) {
            count++;
        }
    }
    
    cout << (count >= k ? "YES\n" : "NO\n");  
    
    return 0;
}
