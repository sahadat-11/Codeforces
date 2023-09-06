//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e9;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      set<ll> st;
        for(ll i = 1; i * i <= inf; i++) {
          st.insert(i * i);
          st.insert(i * i * i);
        }
      int t; cin >> t;
      while(t--) {
        ll n; cin >> n;
        //for(auto u : st) cout << u << " ";
        //cout << st.size() << "\n";
        int cnt = 0;
        for(auto u : st) {
          if(u <= n) cnt++;
        }
        cout << cnt << "\n";
      }
    return 0;
}