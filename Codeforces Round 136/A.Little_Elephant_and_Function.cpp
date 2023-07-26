//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int mxd = a[n - 1] - a[0];
  cout << mxd << " ";
  int cnt1 = 0, cnt2 = 0;
  for(int i = 0; i < n; i++) {
    if(a[0] == a[i]) cnt1++;
    if(a[n - 1] == a[i]) cnt2++;
  }
  if(cnt1 == n) cout << 1ll*n * (n - 1) / 2;
  else cout << 1ll*cnt1 * cnt2 << "\n";
  return 0;
}
//complexity(n);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int mxd = a[n - 1] - a[0];
  cout << mxd << " ";
  int lblow = lower_bound(a, a + n, a[0]) - a;
  int ublow = upper_bound(a, a + n, a[0]) - a;

  int lbhigh = lower_bound(a, a + n, a[n - 1]) - a;
  int ubhigh = upper_bound(a, a + n, a[n - 1]) - a;

  int cnt1 = ublow - lblow;
  int cnt2 = ubhigh - lbhigh;

  if(cnt1 == n) cout << 1ll*n * (n - 1) / 2;
  else cout << 1ll*cnt1 * cnt2 << "\n";
  return 0;
}

// complexity(log(n));