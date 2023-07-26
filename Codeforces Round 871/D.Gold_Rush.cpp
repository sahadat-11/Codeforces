//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(int n, int m) {
	if(n == m) return true;
	else if(n % 3) return false;
	return (ok(n / 3, m) or ok(2 * n / 3 , m));
}
int main() {
	int t; cin >> t;
	while(t--) {                                               
	   int n, m; cin >> n >> m;
	   if(ok(n, m)) cout << "YES\n";
	   else cout << "NO\n";
	} 
	return 0;
}

