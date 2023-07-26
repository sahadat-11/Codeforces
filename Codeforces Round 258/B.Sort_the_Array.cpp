//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + + 1], b[n + 1];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  int fisrt = 0, last = 0;
  sort(b + 1, b + n + 1);
  for(int i = 1; i <= n; i++) {
    if(a[i] != b[i]) {
      if(!fisrt) fisrt = i;
      else last = i;
    }
  }
 //cout << fisrt << " " << last;
 reverse(a + fisrt, a + last + 1);
 bool flag = true;
 for(int i = 1; i <= n; i++) {
   if(a[i] != b[i]) flag = false;
 }
 if(flag) {
   cout << "yes\n";
   if(fisrt == 0) cout << "1 1\n";
   else cout << fisrt << " " << last << "\n";
 }
 else cout << "no\n";
  return 0;
}
// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, a[100001], b[100001], count = 0, x, y, z = 1;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      count++, y = i;
      if (count == 1) x = i;
    }
  }
  reverse(b + x, b + y + 1);
  for (int i = x; i < y; i++) {
    if (a[i] != b[i]) z = 0;
  }
  if (z == 0) cout << "no" << endl;
  else
    cout << "yes" << endl << x + 1 << " " << y + 1 << endl;
}
// approach 3:
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    vector<ll> alp(26);
    for(int i = 0; i < n; i++){
        alp[s[i] - 'A']++;
    }
    sort(alp.rbegin(), alp.rend());
    ll ans = 0;
    for(int i = 0; i < 26; i++){
        ans += min((alp[i])*(alp[i]), k*k);
        k -= min(alp[i], k);
    }
    cout << ans << nl;
}