//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, s, r; cin >> n >> s >> r;
    cout << s - r << " ";
    int x = r / (n - 1);
    int rem = r % (n - 1);
    //cout << x << " " << rem << endl;
    vector<int> v;
    for(int i = 1; i <= n - 1; i++) {
      v.push_back(x);
    }
    for(int i = 0; i < rem; i++) {
      v[i] += 1;
    }
    for(auto u : v) cout << u << " ";
    cout << "\n";
  }
  return 0;
}