//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int i = k; i < n; i++) {
    if(a[i] != a[i + 1]) {
      cout << -1;
      return 0;
    }
  }
  for(int i = k - 1; i >= 1; i--) {
    if(a[i] != a[k]) {
      cout << i;
      return 0;
    }
  }
  cout << 0;
  return 0;
}