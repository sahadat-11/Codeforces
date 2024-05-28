//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; char c; cin >> n >> c;
   map<char, int> mp1, mp2;
   vector<pair<char, int>> p1, p2;
   // for(int i = 0; i < 2 * n; i++) {
   // 	 string s; cin >> s;
   // 	 char x = s[1];
   // 	 mp[x]++;
   // }
   // for(auto [u, v] : mp) {
   // 	if(v % 2) {
   // 	  mp[c]--;
   // 	  mp[u]++;
   // 	}
   // }
   for(int i = 0; i < 2* n; i++) {
      string s; cin >> s;
      char x = s[1];
      if(x != c) {
      	p1.push_back({x, (s[0] - '0')});
      	mp1[x]++;
      }
      else {
      	p2.push_back({x, (s[0] - '0')});
      }
   }
   sort(p1.begin(), p1.end());
   sort(p2.begin(), p2.end());
   int cnt = 0;
   for(auto [u, v] : mp1) {
   	if(v % 2) {
   	  cnt++;
   	}
   }
   bool flag = true;
   if(cnt > (int)p2.size() or (cnt % 2 != (int)p2.size() % 2)) {
   	flag = false;
   }
   int l = 0;
   if(!flag) cout << "IMPOSSIBLE\n";
   else {
     for(int i = 0; i < p1.size(); i++) {
     	if(i + 1 < n and p1[i].first == p1[i + 1].first) {
     	  cout << p1[i].second << p1[i].first << " ";
     	  cout << p1[i + 1].second << p1[i + 1].first << "\n";
     	  i++;
     	}
     	else {
     		cout << p1[i].second << p1[i].first << " ";
     		cout << p2[l++].second << p2[l++].first << " ";
     	}
     }
     for(int i = l; i < (int)p2.size(); i += 2) {
     	cout << p2[i].second << p2[i].first << " ";
     	cout << p2[i + 1].second << p2[i + 1].first << " ";
     }
   }
   //for(auto [u, v] : p1) cout << u << " " << v << endl;
   //for(auto [u, v] : p2) cout << u << " " << v << endl;
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