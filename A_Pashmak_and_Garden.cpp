#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double 
#define mod 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2) {
        int diff = abs(y1 - y2);
        cout << x1 + diff << " " << y1 << " " << x2 + diff << " " << y2;
    }
    else if(y1 == y2) {
        int diff = abs(x1 - x2);
        cout << x1<< " " << y1  + diff << " " << x2 << " " << y2+ diff ;
    }
    else if (abs(x2 - x1) == abs(y2 - y1)) {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
    else cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}