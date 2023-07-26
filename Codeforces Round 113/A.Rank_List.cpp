//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) {
    int x, y; cin >> x >> y;
    a[i] = x * 100 + (100- y);
  }
  sort(a, a + n, greater<int>());
  int x = a[k - 1];
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == x) ans++;
  }
  cout << ans << endl;
  return 0;
}

// approach 2:

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k; cin >> n >> k; int a[n], b[n];
  for(int i = 0; i < n; i++) {
    int x, y; cin >> x >> y;
    a[i] = x * 100 + (100 - y);
    b[i] = a[i];
  }
  sort(a, a + n, greater<int>());
  // for(int i = 0; i < n; i++) {
  //   cout << a[i] << " ";
  // }
  int x = a[k - 1];
 // cout << x << endl;
  sort(b, b + n);
  int lb = lower_bound(b, b + n, x) - b;
  int ub = upper_bound(b, b + n, x) - b;
  //cout << ub << " " << lb << endl;
  cout << ub - lb;
  return 0;
}
