//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int sum = n * (n + 1) / 2;
  int x = 0;
  for(int i = 1; i < n; i++) {
    if(__gcd(sum - i, i) > 1) {
        x = i; break;
    }
  }
  if(x == 0) {
    cout << "No\n";
  }
  if(x != 0) {
    cout << "Yes\n";
    cout << 1 << " " << x << "\n";
    cout << n - 1 << " ";
    for(int i = 1; i <= n; i++) {
        if(i == x) continue;
        cout << i << " ";
    }
  }
  return 0;
}

// O(N)