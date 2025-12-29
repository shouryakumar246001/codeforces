#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        vector<int>a(n);
          vector<int>b(n);
          for(int i =0; i <n ; i++){
            cin>>a[i];

          }
          for(int i =0 ;i<n ; i++){
            cin>>b[i];
          }
          long long excess_sum =0 ;
          for(int i =0 ;i <n ;i++){
if(a[i]>b[i]){
    excess_sum+=(a[i]-b[i]);
}
          }
          cout<<(excess_sum)+1<<endl;
    }
    return 0;
}