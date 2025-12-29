#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s ;
        cin>>s;
        long long current_value=0;
        vector<long long >gains;
        for(int i=0 ; i<n;i++ ){
            long long current_view;
            if(s[i]=='L'){
             current_view=i;
            }
            else{
                current_view=n-1-i;
            }
            current_value+=current_view;
            long long max_view=max(i,n-1-i);
long long possible_gain = max_view - current_view;
            gains.push_back(possible_gain);
        }
        sort(gains.rbegin(),gains.rend());
        for(int k=0;k<n;k++){
            current_value +=gains[k];
            cout<<current_value<<" ";
        }
        cout<<endl;
    }
    return 0;
}