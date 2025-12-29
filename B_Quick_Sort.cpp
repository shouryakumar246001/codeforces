#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;int k;
        cin >> n>> k ;
        vector<int>a(n);
        for(int i =0 ; i<n ;i++){
            cin>>a[i];
            
        }
        int need =1;
        int count=0 ;
        for (int i=0;i<n ;i++){
if(a[i]==need){
    need++;
    count++;
}

        }
        int bad =n-count;
        int ans=0;
        if(bad>0){
           ans = (bad + k - 1) / k;
        }


cout<<ans<<"\n";
        
    }
    return 0;
}