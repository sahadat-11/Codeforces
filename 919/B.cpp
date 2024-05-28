//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
vector<int> v;
void solve() {
   int k; cin >> k;
   cout << v[k - 1] << "\n";
   //for(auto u : v) cout << u << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
   for(int i = 1; i <= 2e7; i++) {
   	 int x = i, sum = 0;
   	 while(x) {
        sum += x % 10;
        x /= 10;
   	 }
   	 if(sum == 10) v.push_back(i);
   }
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
int cal(int x) {
	int sum = 0;
	while(x) {
       sum += x % 10;
       x /= 10;
   	}
   	return sum;
}
void solve() {
   int n; cin >> n;
   int ans = 0;
   while(n) {
   	ans++;
   	if(cal(ans) == 10) n--;
   }
   cout << ans << '\n';
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}