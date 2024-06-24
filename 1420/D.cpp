//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 7, mod = 998244353;
#define int long long
int l[N], r[N], dif[2 * N], p[2 * N], start[2 * N];

int f[N], invf[N];

int binexp(int a, int b) {
  int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
  while(b) {
    if(b & 1) {
      ans = (ans * 1ll * a) % mod;
    }
    a = (a * 1ll * a) % mod;
    b >>= 1;
  }
  return ans;
}

int nCr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * f[n] * invf[r] % mod * invf[n - r] % mod;
}

int nPr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * f[n] * invf[n - r] % mod;
}

void precal() {
  f[0] = 1;
  for (int i = 1; i < N; i++) {
    f[i] = 1ll * i * f[i - 1] % mod;
  }
  invf[N - 1] = binexp(f[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();

  int n, k; cin >> n >> k;
  set<int> st;
  for(int i = 1; i <= n; i++) {
  	cin >> l[i] >> r[i];
  	st.insert(l[i]);
  	st.insert(r[i]);
  }

  // co ordinate compresion
  map<int, int> mp;
  int id = 1;
  for(auto x : st) {
  	mp[x] = id;
  	id++;
  }
  for(int i = 1; i <= n; i++) {
  	l[i] = mp[l[i]];
  	r[i] = mp[r[i]];
  }
  // for(int i = 1; i <= n; i++) {
  //   cout << l[i] << " " << r[i] << "\n";
  // }

  // difference array;
  for(int i = 1; i <= n; i++) {
  	dif[l[i]]++;
  	dif[r[i] + 1]--;
  	start[l[i]]++;
  }
  for(int i = 1; i <= id; i++) {
    dif[i] += dif[i - 1];
    p[i] += dif[i];
    //cout << p[i] << " ";
  }

  int ans = 0;
  for(int i = 1; i <= id; i++) {
  	int x = p[i], y = start[i];
  	ans += (nCr(x, k) - nCr(x - y, k));
  	ans %= mod;
  	ans = (ans + mod) % mod; // if negative;
  }
  cout << ans << "\n";
  return 0;
}

// https://prnt.sc/4J9W6EgprcWS
// https://prnt.sc/wXnCoIudFN3_