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
        vector<int>g(n);
        for(int i =0 ; i<n ; i++){
        cin>>g[i];}
        sort(g.begin(),g.end());
        long long total=0;
        if(n%2==0){
        for(int i =1 ; i<n; i+=2){
            total+=g[i];
        }
    }
    else{
        for(int i=0 ; i< n ; i+=2){
            total+=g[i];
        }
    }
    cout<<total<<endl;

        
    }
    return 0;
}