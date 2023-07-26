//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll a, b, n, s; cin >> a >> b >> n >> s;
    ll sum = 0;
    sum += (b + a * n);
    if(sum < s) cout << "NO\n";
    else if(s % n <= b) cout << "YES\n";
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
