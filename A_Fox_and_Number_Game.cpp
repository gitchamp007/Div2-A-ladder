#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int temp; cin >> temp;
        ans = __gcd(ans, temp);
    }
    cout << ans * n;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}