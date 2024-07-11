//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 2);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<int>pre(n + 2), suf(n + 2);
  int last = 0;
  for(int i = 1; i <= n; i++) {
    if(a[i] == 0) last = i;
    pre[i] = last;
  }
  last = n + 1;
  for(int i = n; i >= 1; i--) {
    if(a[i] == 0) last = i;
    suf[i] = last;
  }
  for(int i = 1; i <= n; i++) {
    //cout << pre[i] << " " << suf[i] << "\n";
    if(pre[i] == 0) cout << abs(suf[i] - i) << " ";
    else if(suf[i] == n + 1) cout << abs(pre[i] - i) << " ";
    else cout << min(abs(pre[i] - i), abs(suf[i] - i)) << " ";
  }
  return 0;
}



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   vector<int> left(n + 2, mod), right(n + 2, mod);
   for(int i = 1; i <= n; i++) {
   	if(v[i] == 0) left[i] = i;
   	else left[i] = left[i - 1];
   }
   for(int i = n; i >= 1; i--) {
   	if(v[i] == 0) right[i] = i;
   	else right[i] = right[i + 1];
   }
   // for(int i = 1; i <= n; i++) {
   // 	 cout << left[i] << " " << right[i] << endl;
   // }
   vector<int> ans;
   for(int i = 1; i <= n; i++) {
   	int x = min(abs(i - left[i]) , abs(i - right[i]));
   	//cout << x << endl;
   	ans.push_back(x);
   }
   for(auto u : ans) cout << u << " ";
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