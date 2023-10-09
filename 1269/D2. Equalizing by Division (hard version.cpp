//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  map<int, vector<int>> mp;
  for(int i = 0; i < n; i++) {
  	int x = a[i], op = 0;
  	while(x) {
  	  mp[x].push_back(op);
  	  x /= 2;
  	  op++;
  	}
  }
  int ans = INT_MAX;
  for(auto u : mp) {
  	//cout << u.first << ":";
  	auto v = u.second;
  	sort(v.begin(), v.end());
  	//cout << v.size() << endl;
  	if(v.size() >= k) {
  		int sum = 0;
  		for(int i = 0; i < k; i++) sum += v[i];
  		ans = min(ans, sum);
  	}
  }
  cout << ans << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  map<int, int>mp1, mp2;
  int ans = INT_MAX;
  for(int i = 0; i < n; i++) {
  	int x = a[i], op = 0;
  	while(x) {
  		mp1[x]++;
  		mp2[x] += op;
  		if(mp1[x] >= k) {
  		  ans = min(ans, mp2[x]);
  		}
  		op++;
  		x /= 2;
  	 }
  }
  cout << ans << "\n";
  return 0;
}
