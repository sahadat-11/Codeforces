//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int cal_sum(vector<int> a) {
    sort(a.begin(), a.end());
    int n = a.size();
    int sum = 0, ans = 0;
    for(int i = 0; i < n; i++) {
       ans += (i * a[i] -  sum);
       sum += a[i];
    }
    return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  map<int, vector<int>[2]> mp;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
       int x; cin >> x;
       mp[x][0].push_back(i);
       mp[x][1].push_back(j);
    }
  }
  int sum = 0;
  for(auto [u, v] : mp) {
    //cout << u << ": ";
    //for(auto x : v[0]) cout << x << " "; cout << "\n";
    //for(auto x : v[1]) cout << x << " "; cout << "\n";
    int sum1 = cal_sum(v[0]);
    int sum2 = cal_sum(v[1]);
    sum += sum1 + sum2;
  }
  cout << sum << "\n";
  return 0;
}