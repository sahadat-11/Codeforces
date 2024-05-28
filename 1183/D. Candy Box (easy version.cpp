//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	 int n; cin >> n; int a[n];
  	 for(int i = 0; i < n; i++) cin >> a[i];
  	 map<int, int > mp;
  	 for(int i = 0; i < n; i++) {
  	 	mp[a[i]]++;
  	 }
  	 // for(auto u : mp) {
  	 	// cout << u.first << " " << u.second << endl;
  	 // }
  	 // cout << endl;
  	 vector<int> v;
  	 for(auto u : mp) {
  	 	v.push_back(u.second);
  	 }
  	 sort(v.rbegin(), v.rend());
  	 //for(auto u : v) cout << u << " "; cout << "\n";
     int ans = v[0];
     int pre = v[0];
     for(int i = 1; i < v.size(); i++) {
     	if(v[i] < pre) {
     	  ans += v[i];
     	  pre = v[i];
     	}
     	else {
     		ans += pre - 1;
     		pre--;
     		if(pre == 0) break;
     	}
     }
     cout << ans << "\n";
  }
  return 0;
}