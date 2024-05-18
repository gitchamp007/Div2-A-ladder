#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

// ll binpow(ll a, ll b, ll p) {
//     ll ans = 1;
//     while(b){
//         if(b & 1) ans = (ans%p) * (a%p) %p;
//         a = (a%p) *(a%p) %p;
//         b /= 2;
//     }
//     return ans;
// }
void solve() {
    ll p, ans = 0, x = 1;
    cin >> p;

    for(x = 1; x < p; x++) {
        bool flag = true;
        ll temp = 1;
        for(ll i = 1; i < p -1; i++) {
            temp = temp * x % p;
            if(temp == 1) {
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }
    cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}