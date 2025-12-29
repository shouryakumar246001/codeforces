#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    set<string> chat;          
    long long traffic = 0;      
    
    string line;
    while (getline(cin, line)) {  
        if (line.empty()) continue;
        
        char type = line[0];
        if (type == '+') {

            string name = line.substr(1);
            chat.insert(name);
        } 
        else if (type == '-') {
            // Remove person
            string name = line.substr(1);
            chat.erase(name);
        } 
        else {
         
   size_t pos = line.find(':');
       string message = line.substr(pos + 1);
    traffic += (long long)message.length() * chat.size();
        }
    }
    
    cout << traffic << "\n";
    return 0;
}
