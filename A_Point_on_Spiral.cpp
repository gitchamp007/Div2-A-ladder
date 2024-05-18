#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int x, y; cin >> x >> y;
    if((x == 0) && y ==0) cout << 0;
    else if(y <= x && y > -1 * (x - 1)) cout << 4*x - 3;
    else if(y >= x && y < -1 * (x)) cout << x*(-4 )- 1;
    else if(x >= -1 *y && x < y) cout << y*4 - 2;
    else if(x > y && x <= -1*y + 1) cout << y*(-4) ;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}