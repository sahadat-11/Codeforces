//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector <int> nums;
  for (int len = 1; len <= 11; len++) {
    for (int mask = 0; mask < (1 << len); mask++) {
      int num = 0;
      for (int k = 0; k < len; k++) { // lenth of bits 
        int digit;
        if (mask & (1 << k)) digit = 4; // check this bit is set or not
        else digit = 7;
        num = num * 10 + digit;
      }
      nums.push_back(num);
    }
  }
  sort(nums.begin(), nums.end());
  //for (auto num: nums) cout << num << "\n";
  vector<int> v;
  for(auto u : nums) {
    int x = u;
    string s = to_string(x);
    int four = count(s.begin(), s.end(), '4');
    int seven = count(s.begin(), s.end(), '7');
    //cout << four << " " << seven << endl;
    if(four == seven) {
      v.push_back(u);
    }
  }

  int n; cin >> n;
  cout << *lower_bound(v.begin(), v.end(), n);
  return 0;
}
