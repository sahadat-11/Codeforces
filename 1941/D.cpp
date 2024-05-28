//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m, x; cin >> n >> m >> x;
   set<int> ans;
   ans.insert(x);
   while(m--) {
   	int dis; char ch; cin >> dis >> ch;
   	set<int> temp;
   	if(ch == '0') {
   	  for(auto u : ans) {
   	  	int man = (u + dis) % n;
   	    if(man == 0) man = n;
   	    temp.insert(man);
   	  }
   	}
   	else if(ch == '1') {
   	    for(auto u : ans) {
   	  	int man = (u - dis + n) % n;
   	    if(man == 0) man = n;
   	    temp.insert(man);
   	  }
   	}
   	else {
   		for(auto u : ans) {
            int man1 = (u + dis) % n;
	   	    if(man1 == 0) man1 = n;
	   	    temp.insert(man1);
	   	    int man2 = (u - dis + n) % n;
	   		if(man2 == 0) man2 = n;
	   	    temp.insert(man2);
	   	}
   	}
   	ans = temp;
   }
   cout << (int)ans.size() << "\n";
   for(auto man : ans) cout << man << " ";
   cout << "\n";
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