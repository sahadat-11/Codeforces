
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int last = 0, mn = INT_MAX;
  int sum = 0;
  for(int i = 0; i < n; i++) {
  	sum += a[i];
  	while(sum >= k) {
  	  mn = min(mn, i - last + 1);
  	  sum -= a[last++];
  	}
  }
  if(mn == INT_MAX) cout << "-1\n";
  else cout << mn << "\n";
  return 0;
}