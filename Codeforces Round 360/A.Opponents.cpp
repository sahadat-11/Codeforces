//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n, d; cin >> n >> d; string s[d];
	for(int i = 0; i < d; i++) cin >> s[i];
    int cnt = 0, mx = 0;
	for(int i = 0; i < d; i++) {
		string x = s[i];
		bool flag = false;
		if(x.find('0') != -1) flag = true;
		if(flag) {
			cnt++;
			mx = max(mx, cnt);
		}
		else cnt = 0;
	}
	cout << mx << "\n";

  return 0;
}

// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, d; cin >> n >> d;
	int res = 0;
	int cnt = 0;
	for (int i = 0; i < d; i++) {
		string s; cin >> s;
		if (count(s.begin(), s.end(), '1') < n) {
			cnt++;
		}
		else {
			cnt = 0;
		}
		res = max(res, cnt);
	}
	cout << res << "\n";

	return 0;
}
