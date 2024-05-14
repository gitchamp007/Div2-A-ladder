#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a,a + n);
    sort(b,b + m);

    int ans = max(2 * a[0] , a[n-1]);
    if(ans < b[0]) cout << ans;
    else cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}