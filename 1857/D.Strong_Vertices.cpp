//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n; int a[n], b[n], c[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for(int i = 0; i < n; i++) {
    c[i] = a[i] - b[i];
  }
  int mx = *max_element(c, c + n);
  vector<int> v;
  for(int i = 0; i < n; i++) {
    if(c[i] == mx) v.push_back(i + 1); 
  }
  cout << v.size() << "\n";
  for(auto u : v) cout << u << " ";
  cout << "\n";
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

// https://prnt.sc/0nnnGMV58eUJ

#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int a[N], b[N];
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    int mx = INT_MIN;
    for (int i = 1; i <= n; i++) mx = max(mx, a[i] - b[i]);
    int c = 0;
    for (int i = 1; i <= n; i++) c += (a[i] - b[i] == mx);
    cout << c << "\n";
    for (int i = 1; i <= n; i++) {
      if (a[i] - b[i] == mx) cout << i << ' ';
    }
    cout << "\n";
  }
}