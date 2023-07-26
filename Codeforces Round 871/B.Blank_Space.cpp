// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve() {
// 	int n; cin >> n; int a[n];
// 	int z = 0;
// 	for(int i = 0; i < n; i++) {
// 		cin >> a[i];
// 		if(a[i] == 0) z++;
// 	}
// 	if(z == 0) {
// 		cout << 0 << "\n";
// 		return;
// 	}
// 	int mx = 1, c = 1;
// 	for(int i = 0; i < n - 1; i++) {
// 	   if(a[i] == 0 and a[i + 1] == 0) {
// 	      c++;
// 	      mx = max(mx, c);
// 	   }
// 	   else c = 1;
// 	}
// 	cout << mx << '\n';
// }
// int main() {
// 	int t; cin >> t;
// 	while(t--) {
// 	  solve();
// 	} 
// 	return 0;
// }


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int mx = 0, c = 0;
	for(int i = 0; i < n; i++) {
	   if(a[i] == 0) c++;
	   else c = 0;
	   mx = max(mx, c);
	}
	cout << mx << '\n';
}
int main() {
	int t; cin >> t;
	while(t--) {
	  solve();
	} 
	return 0;
}

