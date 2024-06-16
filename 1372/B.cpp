//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long

int lcmfind(int a, int b) {
	return a / (__gcd(a, b)) * b;
}

void solve() {
   int n; cin >> n;
   if(n % 2 == 0) {
   	cout << n / 2 << " " << n / 2 << "\n";
   }
   else {
   	vector<int> divs;
   	for(int i = 1; i * i <= n; i++) {
   		if(n % i == 0) {
   		  divs.push_back(i);
   		  if(i != n / i) {
   		  	divs.push_back(n / i);
   		  }
   		}
   	}
   	sort(divs.begin(), divs.end());
   	int ans = INT_MAX;
    for(auto u : divs) {
      int x = u, y = n - u;
      if(y == 0) continue;
      int lcm = lcmfind(x, y);
      //cout << lcm << "\n";
      ans = min(ans, lcm);
    }
    cout << min(ans, n - ans) << " " << max(ans, n - ans) << "\n";
   }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> divs;
    for(int i = 1; i * i <= n; i++) {
      if(n % i == 0) {
        divs.push_back(i);
        if(i != n / i) divs.push_back(n / i);
      }
    }
    sort(divs.begin(), divs.end());
    int k = divs[divs.size() - 2];
    cout << k << " " << n - k << "\n";
  }
  return 0;
}