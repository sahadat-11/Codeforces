//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n; string s; cin >> n >> s; 
    int pre[n], suf[n];
    set<int> st;
    for(int i = 0; i < n; i++) {
        st.insert(s[i]);
        pre[i] = st.size();
    }
    st.clear();
    for(int i = n - 1; i >= 0; i--) {
        st.insert(s[i]);
        suf[i] = st.size();
    }
    int mx = 0;
    for(int i = 0; i < n - 1; i++) {
        mx = max(pre[i] + suf[i + 1], mx);
    }
    cout << mx << "\n";
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n; string s; cin >> s;
   vector<int> pre(n + 2, 0), suf(n + 2, 0);
   set<int> st;
   for(int i = 0; i < n; i++) {
      st.insert(s[i]);
      pre[i] = (int)st.size();
   }
   st.clear();
   for(int i = n - 1; i >= 0; i--) {
      st.insert(s[i]);
      suf[i] = (int)st.size();
   }
   int mx = 0;
   for(int i = 0; i <= n; i++) {
    mx = max(mx, pre[i] + suf[i + 1]); 
   }
   cout << mx << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}