//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, s, t; cin >> n >> s >> t; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  int pos = s, x = 0;
  while(pos != t) {
    pos = a[pos];
    x++;
    if(pos == s) {
      x = -1;
      break;
    }
  }
  cout << x << endl;
  return 0; 
}