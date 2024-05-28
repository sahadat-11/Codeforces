//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x, y; cin >> x >> y;
  int cnt = 0;
  for(int p = 0; p <= x; p++) {
  	for(int n = 0; n <= y; n++) {
  		if(p == (n * p)) cnt++;
  	}
  }
  cout << cnt << "\n";
  return 0;
}
// https://codeforces.com/gym/103241