//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int a, b; cin >> a >> b;
     int cnt = 0;
    while(a / b > b) {
        b++;
        cnt++;
        cout << b << endl;
    }
    cout << cnt << "\n";
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