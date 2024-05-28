//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; cin >> n >> q;
   vector<int> v(n), pre(n, 0), pre_max(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   pre[0] = v[0]; pre_max[0] = v[0];
   for(int i = 1; i < n; i++) {
   	pre[i] = pre[i - 1] + v[i];
   	pre_max[i] = max(pre_max[i - 1], v[i]);
   }
   while(q--) {
   	int x; cin >> x;
   	int up = upper_bound(pre_max.begin(), pre_max.end(), x) - pre_max.begin();
   	//cout << up << " ";
   	if(up == 0) cout << 0 << " ";
   	else cout << pre[up - 1] << " ";
   	//cout << pre[up - 1] << "\n";
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; cin >> n >> q;
   vector<int> v(n + 1), pre(n + 1, 0), pre_max(n + 1, 0);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
   }
   for(int i = 1; i <= n; i++) {
   	pre[i] = pre[i - 1] + v[i];
   	pre_max[i] = max(pre_max[i - 1], v[i]);
   }
   while(q--) {
   	int x; cin >> x;
   	int up = upper_bound(pre_max.begin(), pre_max.end(), x) - pre_max.begin();
   	//cout << up << " ";
   	//if(up == 0) cout << 0 << " ";
   	//else cout << pre[up - 1] << " ";
   	cout << pre[up - 1] << " ";
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}