//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  set<int> left, right;
  map<int, int> left_fre, right_fre;
  while(t--) {
    char c; int l, r; cin >> c >> l >> r;
    if(c == '+') {
    	left.insert(l); right.insert(r);
    	left_fre[l]++; right_fre[r]++;
    }
    else {
      left_fre[l]--; right_fre[r]--;
      if(left_fre[l] == 0) left.erase(l);
      if(right_fre[r] == 0) right.erase(r);
    }
    if(!left.empty() and *--left.end() > *right.begin()) {
    	cout << "YES\n";
    }
    else cout << "NO\n";
  }
  return 0;
}