#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n ;
       string word="";
       for(int i=0 ; i< 8;i++){
        string row;
        cin>>row;
        for(int j=0; j< 8;j++){
        if(row[j]!='.'){
            word+=row[j];
        }
       }
       }
       cout<<word<<endl;
    
        
    }
    return 0;
}