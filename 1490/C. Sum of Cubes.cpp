//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	ll n; cin >> n; 
   	 for(int i = 1; 1ll* i * i * i <= n; i++) {
   	 	ll x = i * i * i;
   	 	ll y = n - x;
   	 	ll z = pow(y, (1.0 / 3.0));
   	 	ll c = pow(z, 3);
   	 	//cout << x << " " << y << " " << z << " " << c << endl;
   	 	if(x + c == n) {
   	 		cout << i << ' ' << z << endl;
   	 		return;
   	 	}
   	 }
   	 cout << -1 << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 solve();
   }
   return 0;
}