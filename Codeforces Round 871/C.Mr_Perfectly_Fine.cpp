//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	vector<pair<int, string>> v;
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		int m; string s; cin >> m >> s;
		v.push_back({m, s});
	}
    int ans1 = INT_MAX, ans2 = 0;
    int f1 = false, f2 = false, f3 = false;
	for(int i = 0; i < n; i++) {
		string x = v[i].second;
		if(x[0] == '1' and x[1] == '1') {
			f1 = true;
			ans1 = min(ans1, v[i].first);
		}
	}
	sort(v.begin(), v.end());
	// for(auto u : v) {
	// 	cout << u.first << " " << u.second << "\n";
	// }
	for(int i = 0; i < n; i++) {
		string x = v[i].second;
		if(x[0] == '1') {
			f2 = true;
			ans2 += v[i].first;
			break;
		}
		
	}
	for(int i = 0; i < n; i++) {
		string x = v[i].second;
		if(x[1] == '1') {
			f3 = true;
			ans2 += v[i].first;
			break;
		}
	}
	if(f1 and f2 and f3) cout << min(ans1, ans2) << "\n";
	else if(f2 and f3) cout << ans2 << "\n";
	else cout << - 1 << "\n";
}
int main() {
	int t; cin >> t;
	while(t--) {
	  solve();
	} 
	return 0;
}

// approach 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int ans = 1e9; x = 1e9, y = 1e9;
    for (int i = 0; i < n; i++) {
      int m; string s; cin >> m >> s;
      if (s == "11") {
        ans = min(ans, m);
      } 
      else if (s == "10") {
        x = min(x, m);
      } 
      else if (s == "01") {
        y = min(y, m);
      }
    }
    ans = min(ans, x + y);
    if (ans == 1e9) cout << "-1" << endl;
     else cout << ans << endl;
  }
  return 0;
}