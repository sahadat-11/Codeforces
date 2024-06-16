//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	string a, b; cin >> a >> b;
  	int n1 = a.size(), n2 = b.size();
  	bool flag = false;
  	sort(a.begin(), a.end());
  	for(int i = 0; i <= n2 - n1; i++) {
  		string x = b.substr(i, n1);
  		sort(x.begin(), x.end());
  		if(a == x) flag = true;
  	}
  	if(flag) cout << "YES\n";
  	else cout << "NO\n";
  }
  return 0;
}