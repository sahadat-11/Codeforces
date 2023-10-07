//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	int n; cin >> n;
  	int cnt = 0;
  	while(n--) {
  		int a, b; cin >> a >> b;
  		if(a > b) cnt++;
  	}
  	cout << cnt << "\n";
  }
  return 0;
}