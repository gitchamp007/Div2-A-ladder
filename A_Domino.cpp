#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    int up[n] , lo[n];
    for(int i = 0; i < n; i++) cin >> up[i] >> lo[i];

    int up_sum = 0, lo_sum = 0, lolc = 0;
    for(int i = 0; i < n; i++) {
        up_sum += up[i];
        lo_sum += lo[i];
        if(abs(up[i] - lo[i]) & 1) lolc++;
    }
    if(up_sum&1 && lo_sum&1 && lolc) cout << 1;
    else if (!(up_sum & 1) && !(lo_sum & 1)) cout << 0 << endl;
    else cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}