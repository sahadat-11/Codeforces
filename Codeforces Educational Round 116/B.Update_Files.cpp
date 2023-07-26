//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    ll n, k; cin >> n >> k;
    ll x = 1; ll cnt = 0;

    while(x * 2 <= n and x <= k) {
      x *= 2;
      cnt++;
    }
    cnt += (n - x + k - 1) / k;
    cout << cnt << "\n";
  }
  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k, c = 1, a = 0;
    cin >> n >> k;
    while (c < k) {
      c *= 2;
      a++;
    }
    a += (n - c + k - 1) / k;
    cout << a << endl;
  }
  return 0;
}