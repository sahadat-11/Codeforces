//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, k; cin >> n >> k; int a[n], b[n], ans[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    sort(b, b + n);
    for(int i = 0; i < n; i++) {
        int x = v[i].second;
        ans[x] = b[i];
    }
    for(int i = 0; i < n; i++) cout << ans[i] << " "; cout << "\n";
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
