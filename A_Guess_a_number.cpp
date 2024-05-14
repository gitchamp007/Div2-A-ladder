#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double 
#define mod 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    ll lo = LONG_LONG_MIN, hi = LONG_LONG_MAX;
    while(n--){
        string type; cin >> type;
        ll x; cin >> x;
        char ver; cin >> ver;

        if(type == ">=") {
            if(ver == 'Y'){
                if(x > lo) lo = x;
            } else {
                if(x - 1 < hi) hi = x - 1;
            }
        }
        else if(type == "<") {
            if(ver == 'Y'){
                if(x - 1 < hi) hi = x - 1;
            } else {
                if(x > lo) lo = x;
            }
        }
        else if(type == "<=") {
            if(ver == 'Y'){
                if(x < hi) hi = x;
            } else {
                if(x + 1 > lo) lo = x + 1;
            }
        }
        else if(type == ">") {
            if(ver == 'Y'){
                if(x + 1 > lo) lo = x + 1;
            } else {
                if(x < hi) hi = x;
            }
        }
    }
    if(hi >= lo && hi != LONG_LONG_MAX) cout << hi;
    else if(hi >= lo && lo != LONG_LONG_MIN) cout << lo;
    else if(hi >= lo) cout << 0;
    else cout << "Impossible";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}