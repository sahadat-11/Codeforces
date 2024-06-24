//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 7, mod = 1e9 + 7;
#define int long long
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
vector<int> Primefactor(int n) {
    vector<int> primes_facts;
    for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
        while(n % i == 0) {
          primes_facts.push_back(i);
          n /= i;
        }
      }
    }
    if(n > 1) {
      primes_facts.push_back(n);
    }
    return primes_facts;
}

void solve() {
  int x, y; cin >> x >> y;
  auto facts = Primefactor(x);
  map<int, int> xf;
  for(auto p : facts) {
    xf[p]++;
  }
  int ans = 1;
  for(auto [p, k] : xf) {
    ans = ans * nCr(k + y - 1, y - 1) % mod;
  }
  ans = ans * (binexp(2, y - 1)) % mod;
  cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();

  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/8BCSJEGAtPJF
// https://prnt.sc/pjYoCnvGr5AB