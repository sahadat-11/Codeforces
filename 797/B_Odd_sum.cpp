//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  int sum = 0, maxneg = INT_MIN, minodd = INT_MAX;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] >= 0) {
        sum += a[i];
        if(a[i] & 1) {
          minodd = min(minodd, a[i]);
        }
    }
    else if(a[i] & 1) {
        maxneg = max(maxneg, a[i]);
    }
  }
  //cout << sum << " " << minodd << " " << maxneg << "\n";
  if(sum & 1) cout << sum << "\n";
  else cout << sum - min(minodd, abs(maxneg)) << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.rbegin(), v.rend());
   int sum = 0, min_pos_odd = INT_MAX, max_neg_odd = INT_MIN;
   for(int i = 0; i < n; i++) {
   	 if(v[i] >= 0) sum += v[i];
   	 if(v[i] % 2) {
   	 	if(v[i] > 0) min_pos_odd = min(min_pos_odd, v[i]);
   	 	else max_neg_odd = max(max_neg_odd, v[i]);
   	 }
   }
   if(sum % 2) cout << sum << "\n";
   else {
   	ll x = sum - min_pos_odd;
   	ll y = sum - abs(max_neg_odd);
   	cout << max(x, y);
   }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}