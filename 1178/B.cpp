//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  vector<int> pre(n, 0), suf(n, 0);
  int cnt = 0;
  for(int i = 1; i < n; i++) {
  	if(s[i] == 'v' and s[i - 1] == 'v') {
  	  cnt++;
  	}
  	if(s[i] == 'o') {
  		pre[i] = cnt;
  		//cnt = 0;
  	}
  }
  cnt = 0;
  for(int i = n - 2; i >= 0; i--) {
  	if(s[i] == 'v' and s[i + 1] == 'v') {
  	  cnt++;
  	}
  	if(s[i] == 'o') {
  		suf[i] = cnt;
  		//cnt = 0;
  	}
  }
  // for(int i = 0; i < n; i++) {
  // 	cout << pre[i] << " " << suf[i] << "\n";
  // }
  int ans = 0;
  for(int i = 0; i < n; i++) {
  	if(s[i] == 'o') {
      ans += (pre[i] * suf[i]);
  	}
  }
  cout << ans << "\n";
  return 0;
}


#include <iostream>

using namespace std;

typedef long long ll;

string s;
int n;
ll a, b, c;


int main() {
	cin >> s;
	n = s.size();
	for (int i = 1; i < n; i++) {
		if (s[i-1] == 'v' && s[i] == 'v') {
			a++;
			c += b;
		}
		if (s[i] == 'o') {
			b += a;
		}
	}
	cout << c << "\n";
}
