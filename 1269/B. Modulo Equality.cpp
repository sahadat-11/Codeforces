//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; 
  vector<int>a(n), b(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int mn = INT_MAX;
  for(int i = 0; i < n; i++) {
  	int x = ((b[i] - a[0]) + m) % m;
  	vector<int> v;
  	for(int j = 0; j < n; j++) {
  		v.push_back((a[j] + x) % m);
  	}
  	sort(v.begin(), v.end());
  	if(v == b) {
  		mn = min(mn, x);
  	}
  }
  cout << mn << "\n";
  return 0;
}

//https://prnt.sc/lf5gWW1wCAWN 