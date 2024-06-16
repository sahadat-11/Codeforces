//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
const int N = 5e6 + 7;

int binexp(long long a, long long b, int mod) {
  int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
  while (b) {
    if (b & 1) ans = 1ll * ans * a % mod;
    a = 1ll * a * a % mod;
    b >>= 1;
  }
  return ans;
}

int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void precal() { // O(n)
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
  }
  ip1 = binexp(p1, mod1 - 2, mod1);
  ip2 = binexp(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
  }
}

pair<int, int> string_hash(string s) { // O(n)
  int n = s.size();
  pair<int, int> hs({0, 0});
  for (int i = 0; i < n; i++) {
    hs.first += 1LL * s[i] * pw[i].first % mod1;
    hs.first %= mod1;
    hs.second += 1LL * s[i] * pw[i].second % mod2;
    hs.second %= mod2;
  }
  return hs;
}

struct Hashing {
  pair<int, int> pref[N];
  void prefix_sum(string s) { // O(n)
      int n = s.size();
      for (int i = 0; i < n; i++) {
      pref[i].first = 1LL * s[i] * pw[i].first % mod1;
      if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
      pref[i].second = 1LL * s[i] * pw[i].second % mod2;
      if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
    }
  }
  pair<int, int> substr_hash(int i, int j) { // O(1)
    // assert(i <= j);
    pair<int, int> hs({0, 0});
    hs.first = pref[j].first;
    if (i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
    hs.first = 1LL * hs.first * ipw[i].first % mod1;
    hs.second = pref[j].second;
    if (i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
    hs.second = 1LL * hs.second * ipw[i].second % mod2;
    return hs;
  }
}S, R;
int n;
bool is_palindrome(int i, int j) { // O(1)
  return S.substr_hash(i, j) == R.substr_hash(n - j - 1, n - i - 1);
}

int dp[N];
bool is_pal[N];
// s[0....i] is maximum which degree-palindrome
int f(int i) {
  if (!is_pal[i]) return 0;
  if (i == 0) return 1;
  int &ans = dp[i];
  if (ans != -1) return ans;
  int left_half_endpoint = i / 2;
  if ((i + 1) % 2 == 1) {
    left_half_endpoint--;
  }
  ans = 1;
  if (is_pal[left_half_endpoint]) {
    ans += f(left_half_endpoint);
  }
  return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  precal();
  string s; cin >> s;
  n = s.size();
  string r = s;
  reverse(r.begin(), r.end());
  S.prefix_sum(s);
  R.prefix_sum(r);
  for (int i = 0; i < n; i++) {
    is_pal[i] = is_palindrome(0, i);
  }
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += f(i);
  }
  cout << sum << '\n';
  return 0;
}
