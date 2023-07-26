//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		string a, b; cin >> a >> b;
		int n1 = a.size(), n2 = b.size();
		sort(a.begin(), a.end());
		bool flag = false;
		for(int i = 0; i <= n2 - n1; i++) {
			string x = b.substr(i, n1);
			sort(x.begin(), x.end());
			if(x == a) flag = true;
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
  return 0;
}
