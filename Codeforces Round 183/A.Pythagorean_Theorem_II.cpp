//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = i; j <= n; j++) {
      int x = sqrtl(i * i + j * j);
      if(x <= n and (x * x == i * i + j * j)) cnt++;
    }
  }
  cout << cnt;
  return 0;
}
