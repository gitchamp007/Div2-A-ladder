#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double 
#define mod 1e9 + 7
#define endl '\n' 
using namespace std; 

char arr[] = {'A','E','I','O','U','Y','a','e','i','o','y','u'};

void solve() {
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        int flag = 1;
        for(int j = 0; j < 12; j++) {
            if(s[i] == arr[j]) {
                flag = 0;
            }
        }
        if(flag == 0) continue;
        else {
            if(s[i] > 'A' && s[i] <= 'Z') cout << "." << char(s[i] - 'A' +'a');
            else cout << "." << s[i];
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}