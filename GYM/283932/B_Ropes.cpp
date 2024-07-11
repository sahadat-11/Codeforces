//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
bool isValid(vector<int> a, int k, double mid) {
    if(mid == 0) return true;
    int x = 0;
    for(int i = 0; i < a.size(); i++) {
        x += (a[i] / mid);
    }
    return x >= k;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int lp = 100;
  double l = 0, h = 1e8, ans = 0;
  while(lp--) {
    double mid = l + (h - l) / 2;
    if(isValid(a, k, mid)) {
        l = mid;
    }
    else {
        h = mid;
    }
  }
  cout << fixed << setprecision(6) << l << "\n";
  return 0;
}