//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string a, b; cin >> a >> b;
  vector<int> v;

  for(int i = 0; i < n; i++) {
    int idx = -1;
    for(int j = i; j < n; j++) {
      if(b[i] == a[j]) {
        idx = j;
        break;
      }
    }
    //cout << idx << endl;
    if(idx == -1) {
      cout << -1 << "\n";
      return 0;
    }
    for(int k = idx; k > i; k--) {
      swap(a[k], a[k - 1]);
      v.push_back(k);
    }
  }
  cout << v.size() << "\n";
  for(auto u : v) cout << u << " ";
  return 0;
}