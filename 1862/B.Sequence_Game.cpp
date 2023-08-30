//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	int n; cin >> n; int a[n];
    vector<int> v;
    for(int i = 0; i < n; i++) cin >> a[i];
    v.push_back(a[0]);
    for(int i = 1; i < n; i++) {
      if(a[i - 1] <= a[i]) {
        v.push_back(a[i]);
      }
      else {
        v.push_back(a[i]);
        v.push_back(a[i]);
      }
    }
    cout << v.size() << "\n";
    for(auto u : v) cout << u << " ";
    cout << "\n";
  }
  return 0;
}