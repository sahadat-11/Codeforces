//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

    int n, m; cin >> n >> m; int a[n], b[n];
    ll sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++) {
      cin >> a[i] >> b[i];
      sum1 += a[i];
      sum2 += b[i];
    }
    if(sum2 > m) {
      cout << -1 << "\n";
      return 0;
    }
    else if(sum1 <= m) {
      cout << 0 << "\n";
      return 0;
    }
    int ans = 1;
    vector<int> dif;
    
    for(int i = 0; i < n; i++) {
      dif.push_back(a[i] - b[i]);
    }

    sort(dif.rbegin(), dif.rend());
    for(auto u : dif) {
      sum1 -= u;
      //cout << sum1 << endl;
      if(sum1 > m) ans++;
      else break;
    }
    
    cout << ans << "\n";
  return 0;
}

// approach 2:

#include<bits/stdc++.h>

using namespace std;
int main() {
  int n, num[100010], ans = 0;
  long long sum = 0, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int a1, a2;
    cin >> a1 >> a2;
    num[i] = a1 - a2;
    sum = sum + a1;
  }
  sort(num, num + n);
  for (int i = n - 1; i >= 0; i--) {
    if (sum > m) {
      sum = sum - num[i];
      ans++;
    } else break;
  }
  if (sum <= m) cout << ans;
  else cout << "-1";
  return 0;
}

// approach 3:

#include<bits/stdc++.h>

#define int long long
#define FOR(i, l, r) for (int i = (l); i <= (r); ++i)
  using namespace std;
int c[100010];
int s = 0;
bool cmp(int x, int y) {
  return x > y;
}
signed main() {
  int a, b, sum1 = 0, sum2 = 0;
  int n, m;
  cin >> n >> m;
  FOR(i, 1, n) {
    cin >> a >> b;
    sum1 += a;
    sum2 += b;
    c[i] = a - b;
  }
  if (sum2 > m) {
    cout << -1;
    return 0;
  }
  sort(c + 1, c + n + 1, cmp);
  for (int i = 1; sum1 > m; i++) {
    s++;
    sum1 -= c[i];
  }
  cout << s;
  return 0;
}

