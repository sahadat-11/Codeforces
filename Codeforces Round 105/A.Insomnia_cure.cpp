//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int k, l, m, n, d; cin >> k >> l >> m >> n >> d;
  if(k == 1 or l == 1 or m == 1 or n == 1) cout << d;
  else {
    set<int> st;
    for(int i = k; i <= d; i += k) st.insert(i);
    for(int i = l; i <= d; i += l) st.insert(i);
    for(int i = m; i <= d; i += m) st.insert(i);
    for(int i = n; i <= d; i += n) st.insert(i);
    cout << st.size();
  }
  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main() {
  int k, l, m, n, d, ans = 0;
  cin >> k >> l >> m >> n >> d;
  for (int i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      ans++;
    }
  }
  cout << ans;
}