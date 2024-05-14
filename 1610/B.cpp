//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
bool check(vector<int> a) {
	int i = 0, j = (int) a.size() - 1;
	//cout << i << " " << j << endl;
    while(i <= j) {
      if(a[i] != a[j]) return false;
      i++; j--;
    }
    return true;
}
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   bool flag = true;
   int i = 0, j = n - 1;
   vector<int> a, b;
   while(i <= j) {
   	if(v[i] != v[j]) {
   	  flag = false;
   	  for(int k = 0; k < n; k++) {
   	  	if(v[i] != v[k]) a.push_back(v[k]);
   	  	if(v[j] != v[k]) b.push_back(v[k]);
   	  }
   	  //for(auto u : a) cout << u << " "; cout << "\n";
   	  //for(auto u : b) cout << u << " "; cout << "\n";
   	  if(check(a)) {
   	  	flag = true;
   	  	//cout << flag << "\n";
   	  }
   	  else if(check(b)) {
   	  	flag = true;
   	  	//cout << flag << "\n";
   	  }
   	  //cout << i << " " << j << endl;
   	  //cout << flag << "\n";
   	  break;  
   	}
   	i++; j--;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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