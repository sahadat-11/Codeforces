//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int i = 0, j = 0, k = 0;
  vector<int> ans(n + m);
  while(i < n and j < m) {
    if(a[i] <= b[j]) {
        ans[k] = a[i];
        i++; k++;
    }
    else {
        ans[k] = b[j];
        j++; k++;
    }
  }
  while(i < n) {
    ans[k] = a[i];
    i++; k++;
  }
  while(j < m) {
    ans[k] = b[j];
    j++; k++;
  }
  for(int x = 0; x < n + m; x++) {
    cout << ans[x] << " ";
  }
  return 0;
}