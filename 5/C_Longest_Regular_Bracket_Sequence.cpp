//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size(), ans = 0;
  stack<int> st;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    if(s[i] == '(') {
      st.push(i); // 
    }
    else if(st.size()) {
        a[st.top()] = a[i] = 1;
        st.pop();
    }
  }
  for(int i = 1; i < n; i++) {
    if(a[i]) {
        a[i] += a[i - 1];
    }
  }
  int mx = *max_element(a.begin(), a.end());
  int cnt = count(a.begin(), a.end(), mx);
  if(mx == 0) {
    cout << 0 << " " << 1 << "\n";
  }
  else {
    cout << mx << " " << cnt << "\n";
  }
 
  return 0;
}