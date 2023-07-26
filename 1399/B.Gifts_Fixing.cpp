//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int mina = *min_element(a, a + n);
    int minb = *min_element(b, b + n);
    ll cnt = 0;
    for(int i = 0; i < n; i++) {
       int x = min(a[i] - mina, b[i] - minb);
       cnt += x;
       cnt += (a[i] - mina - x);
       cnt += (b[i] - minb - x);
    }
    cout << cnt << "\n";
  }
  return 0;
}

// approach 2:
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  int k = * min_element(a, a + n);
  int l = * min_element(b, b + n);
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += max((a[i] - k), (b[i] - l));
  }
  cout << sum << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}