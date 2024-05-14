#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double 
#define mod 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    vector <pair<int, int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    for(int i = 1; i < n; i++) {
        if(a[i-1].first < a[i].first && a[i-1].second > a[i].second) {
            cout << "Happy Alex";
            return;
        }
    }
    cout << "Poor Alex";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}

