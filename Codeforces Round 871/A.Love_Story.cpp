//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		string che = "codeforces";
		int c = 0;
		int n = s.size();
		for(int i = 0; i < n; i++) {
			if(s[i] != che[i]) c++;
		}
		cout << c << "\n";
	} 
	return 0;
}

