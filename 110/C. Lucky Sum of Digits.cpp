//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int a = 0, b;
  int x = -1, y = -1;
  for(b = 1; b <= n; b++) {
  	a = (n - 4 * b) / 7;
  	cout << a << " " << b << endl;
  	if((b * 4 + a * 7 == n) and (a >= 0 and b >= 0)) {
  			x = a, y = b;
  			cout << x << " " << y;
  			break;
  	}
  }
 if(x == -1 or y == -1) cout << -1 << endl;
 else {
 	for(int i = 1; i <= y; i++) cout << 4;
    for(int i = 1; i <= x; i++) cout << 7;
 }
 
  return 0;
}