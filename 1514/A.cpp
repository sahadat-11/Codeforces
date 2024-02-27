//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
    int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) {
    	int x = sqrtl(v[i]);
    	if(x * x != v[i]) {
    	  cout << "YES\n";
    	  return;
    	}
    }
    cout << "NO\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/pyuogSTiBz_T
// https://prnt.sc/wyWn3v7yZriW
// https://prnt.sc/VzknFa3p6_-Y