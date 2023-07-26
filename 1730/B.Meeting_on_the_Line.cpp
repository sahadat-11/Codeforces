//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i]; 
    vector<int> v;
    for(int i = 0; i < n; i++) {
      v.push_back(a[i] + b[i]);
      v.push_back(a[i] - b[i]);
    }
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    double ans = (1.0* mx + mn) / 2;
    cout << fixed << setprecision(1) << ans << "\n";
  }
  return 0;
}