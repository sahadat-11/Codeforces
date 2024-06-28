//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> subsets(vector<int>& nums) {
  int n = nums.size();
  int sub_cnt = (1 << n); // (2^n);
  vector < vector < int >> all_subsets;
  for (int mask = 2; mask < sub_cnt; mask++) {
    vector < int > subset;
    for (int i = 0; i < n; i++) {
      if (mask & (1ll << i)) {
        subset.push_back(nums[i]);
      }
    }
    all_subsets.push_back(subset);
  }
  return all_subsets;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, l, r, x; cin >> n >> l >> r >> x;
  vector < int > a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  auto all_subsets = subsets(a);
  for (auto subset: all_subsets) {
  	int sum = 0, mx = 0, mn = INT_MAX;
    for (int ele: subset) {
      sum += ele;
      mx = max(mx, ele);
      mn = min(mn, ele);
    }
    if(sum >= l and sum <= r and (mx - mn >= x)) {
      ans++;
    }
  }
  cout << ans << "\n";
  return 0;
}