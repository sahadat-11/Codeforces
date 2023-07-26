//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int mx = *max_element(a, a + n);
    int mxi;
    for(int i = 0; i < n; i++) {
        if(a[i] == mx) mxi = i;
    }
    bool flag = true;
    for(int i = mxi - 1; i >= 0; i--) {
        if(a[i] > a[i + 1]) flag = false;
    } 
    for(int i = mxi + 1; i < n; i++) {
        if(a[i] > a[i - 1]) flag = false;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
} 