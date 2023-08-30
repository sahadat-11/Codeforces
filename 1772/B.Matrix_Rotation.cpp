//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    bool flag = false;
    for(int i = 0; i < 4; i++) {
      if(a < b and c < d and a < c and b < d) flag = true;
      int temp;
      temp = a, a = c, c = d, d = b, b = temp; 
      //cout << a << b << c << d;
    } 
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  } 
  return 0;
}
// approach 2;

#include <bits/stdc++.h>
using namespace std;
int main () {
int t; cin >> t;
while (t--) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    puts((a < b) == (c < d) && (a < c) == (b < d) ? "YES" : "NO");
  }
}