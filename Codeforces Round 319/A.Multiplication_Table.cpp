//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    if(x % i == 0 and x / i <= n) cnt++;
  }
  cout << cnt << "\n";
  return 0; 
}