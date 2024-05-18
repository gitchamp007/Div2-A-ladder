#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    string s1, s2; cin >> s1 >> s2;

    if(s1.size() != s2.size()) cout << "NO";
    else {
        vector <int> pos;
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) pos.push_back(i);
        }
        if(pos.size() != 2) cout << "NO";
        else if((s2[pos[1]] != s1[pos[0]]  || s2[pos[0]] != s1[pos[1]])) cout << "NO";
        else cout << "YES";
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}