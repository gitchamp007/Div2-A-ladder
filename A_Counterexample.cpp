#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    ll l, r; cin >> l >> r;
    if(l&1) {
        if(r - l < 3) cout << - 1;
        else cout << l + 1 << " " << l + 2 << " " << l +3;
    } else {
        if(r - l < 2) cout << - 1;
        else cout << l << " " << l + 1<< " " << l +2;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}