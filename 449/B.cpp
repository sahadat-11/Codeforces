//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int m; cin >> m; int b[m];
   for(int i = 0; i < m; i++) cin >> b[i];
   sort(a, a + n); sort(b, b + m);
   int cnt = 0;
   for(int i = 0; i < n; i++) {
   	 for(int j = 0; j < m; j++) {
   	 	if(abs(a[i] - b[j]) <= 1) {
   	 		cnt++;
   	 		b[j] = 1001;
   	 		break; // one is pair only one
   	 	}
   	 }
   }
   cout << cnt << "\n";
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