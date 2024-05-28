//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, t; cin >> n >> t; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int sum = 0, l = 0, res = 0;
  for(int r = 0; r < n; r++) {
    sum += a[r];
    while(sum > t) {
      sum -= a[l++];
    }
    res = max(res, r - l + 1);
  }
  cout << res << "\n";
  return 0; 
}