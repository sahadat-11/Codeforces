//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	 int n; cin >> n;
  	 if(n == 9 or n <= 6) cout << "NO\n";
  	 else {
  	 	cout << "YES\n";
  	 	if(n % 3 == 0) cout << "1 4 " << n - 5 << "\n";
  	 	else cout << "1 2 " << n - 3 << "\n";
  	 }
  }
  return 0;
}