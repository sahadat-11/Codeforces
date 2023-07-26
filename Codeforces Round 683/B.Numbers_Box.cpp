//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, m; cin >> n >> m;
    int sum = 0, neg = 0, mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int x; cin >> x;
            mn = min(mn, abs(x));
            sum += abs(x);
            if(x < 0) neg++;
        }
    }
    //cout << neg << endl;
    if(neg % 2) sum -= 2 * mn;
    cout << sum << "\n";
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
