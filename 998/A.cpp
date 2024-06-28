//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  int mn = INT_MAX, mnid = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] < mn) {
      mn = a[i];
      mnid = i + 1;
    }
  }
  sort(a.begin(), a.end());
  bool flag = false;
  if(n == 1 or (n == 2 and a[0] == a[n - 1])) {
  	cout << "-1\n";
  }
  else {
  	cout << 1 << "\n" << mnid << "\n";
  }
  return 0;
}