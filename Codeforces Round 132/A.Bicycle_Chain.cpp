//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int m; cin >> m; int b[m];
  for(int i = 0; i < m; i++) cin >> b[i];
  int mx = INT_MIN;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(b[j] % a[i] == 0) mx = max(b[j] / a[i], mx);
    }
  }
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(b[j] % a[i] == 0 and b[j] / a[i] == mx) cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}