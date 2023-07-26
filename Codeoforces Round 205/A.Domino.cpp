//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n], b[n];
  int evenodd = 0, oddeven = 0, sum1 = 0, sum2 = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    if(a[i] % 2 and b[i] % 2 == 0) oddeven++;
    if(a[i] % 2 == 0 and b[i] % 2) evenodd++;
    sum1 += a[i]; sum2 += b[i];
  }
  int cnt = -1;
  if(sum1 % 2 == 0 and sum2 % 2 == 0) cnt = 0; // both even
  if((sum1 % 2 and sum2 % 2 == 0) or (sum1 % 2 == 0 and sum2 % 2)) {
    cnt = -1; // different parity
  }
  if(sum1 % 2 and sum2 % 2) { // both odd 
    if(evenodd or oddeven) cnt = 1;
  }
  cout << cnt;
  return 0;
}

// approach 2:
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  long long v = 0, s1 = 0, s2 = 0;
  long long  a, b;
  while (n--) {
    cin >> a >> b;
    if (a % 2 != b % 2) v = 1; // different parity
    s1 += a;
    s2 += b;
  }
  if (s1 % 2 == 0 && s2 % 2 == 0) cout << 0;
  else if (v && s1 % 2 == 1 && s2 % 2 == 1) cout << 1;
  else cout << -1;
}

// approach 3:
#include <bits/stdc++.h>
using namespace std;
int main() {
  ll n; cin >> n;
  ll x, y;
  ll up = 0, down = 0, flag = 0;
  for (ll i = 0; i < n; i++) {
    cin >> x >> y;
    if (x % 2) up++;
    if (y % 2) down++;
    if ((x + y) % 2) flag = 1;
  }
  if (up % 2 == 0 && down % 2 == 0) cout << 0 << endl;
  else if (up % 2 != 0 && down % 2 != 0 && flag) cout << 1 << endl;
  else cout << -1 << endl;
}