//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
#define int long long

int binexp(int a, int b, int mod) {
  int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
  while (b) {
    if (b & 1) ans = ans * a % mod;
    a = a * a % mod;
    b >>= 1;
  }
  return ans;
}
 
int ip1, ip2;
pair<int, int> pw[N], ipw[N];

pair<int, int> string_hash(string s) {
  int n = s.size();
  pair<int, int> hs({0, 0});
  for (int i = 0; i < n; i++) {
    hs.first += s[i] * pw[i].first % mod1;
    hs.first %= mod1;
    hs.second += s[i] * pw[i].second % mod2;
    hs.second %= mod2;
  }
  return hs;
}

pair<int, int> pref[N];
void prefix_sum(string s) {
  int sz = s.size();
  for (int i = 0; i < sz; i++) {
    pref[i].first = s[i] * pw[i].first % mod1;
    if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
    pref[i].second = s[i] * pw[i].second % mod2;
    if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
  }
}

pair<int, int> substr_hash(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pref[j].first;
  if (i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
  hs.first = hs.first * ipw[i].first % mod1;
  hs.second = pref[j].second;
  if (i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
  hs.second = hs.second * ipw[i].second % mod2;
  return hs;
}
int n;
bool check(int k) {
  for(int i = 1; i + k - 1 < n - 1; i++) {
    if(substr_hash(i, i + k - 1) == substr_hash(0, k - 1)) {
      return true;
    }
  }
  return false;
}
 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // power of p calculate
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = pw[i - 1].first * p1 % mod1;
    pw[i].second = pw[i - 1].second * p2 % mod2;
  }
  
  // inverse of p calculate
  ip1 = binexp(p1, mod1 - 2, mod1);
  ip2 = binexp(p2, mod2 - 2, mod2);

  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = ipw[i - 1].second * ip2 % mod2;
  }

  string a; cin >> a;
  prefix_sum(a);
  n = a.size();
  vector<int> good_substr_lenghts;
  for(int len = 1; len <= n; len++) {
    if(substr_hash(0, len - 1) == substr_hash(n - len, n - 1)) {
      good_substr_lenghts.push_back(len);
    }
  }
  int l = 0, r = good_substr_lenghts.size() - 1, ans = -1;
  while(l <= r) {
    int mid = (l + r) >> 1;
    if(check(good_substr_lenghts[mid])) {
      ans = good_substr_lenghts[mid];
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  if(ans == -1) cout << "Just a legend\n";
  else cout << a.substr(0, ans) << "\n";
  return 0;
}
