//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int sum, limit; cin >> sum >> limit;
  vector<int> ans;
  for(int i = limit; i >= 1; i--) {
     int ind = __builtin_ctz(i);
     int mx = (1 << ind);
     if(mx <= sum) {
        sum -= mx;
        ans.push_back(i); 
     }
  }
  if(sum != 0) cout << "-1\n";
  else {
    cout << ans.size() << "\n";
    for(auto u : ans) cout << u << " ";
  }
  return 0;
}