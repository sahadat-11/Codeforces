//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 2);
   for(int i = 0; i < n + 2; i++) cin >> v[i];
   sort(v.begin(), v.end());
   int sum = 0;
   for(int i = 0; i < n; i++) sum += v[i];
   if(sum == v[n]) {
   	for(int i = 0; i < n; i++) cout << v[i] << " ";
   }
   else {
   	sum += v[n];
   	bool flag = false;
   	int indx = -1;
   	for(int i = 0; i < n + 1; i++) {
   	  if(sum - v[i] == v[n + 1]) {
   	  	flag = true;
   	  	indx = i;
   	  }
   	}
   	if(flag) {
   	  for(int i = 0; i < n + 1; i++) {
   	  	if(i ==  indx) continue;
   	  	cout << v[i] << " ";
   	  }
   	}
   	else cout << "-1";
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