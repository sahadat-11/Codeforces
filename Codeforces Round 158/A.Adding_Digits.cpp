//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, n; cin >> a >> b >> n;
  bool flag = false;
  for(int i = 0; i <= 9; i++) {
    if((a * 10 + i) % b == 0) {
      cout << a * 10 + i;
      flag = true;
      break;
    }
  }
  if(!flag) cout << "-1";
  else {
    for(int i = 1; i < n; i++) cout << 0;
  }
  return 0; 
}