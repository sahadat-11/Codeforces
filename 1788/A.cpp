//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int two = 0;
   for(int i = 0; i < n; i++) {
   	if(v[i] == 2) two++;
   }
   if(two & 1) {
   	cout << "-1\n";
   }
   else {
   	int h = two / 2;
   	int cnt = 0;
   	for(int i = 0; i < n; i++) {
   		if(v[i] == 2) cnt++;
   		if(cnt == h) {
   			cout << i + 1 << "\n"; break;
   		}
   	}
   }
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