//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; 
  int ans = 0;
  while(n--) {
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];
    int c = count(a, a + 3, 1);
    if(c >= 2) ans++;
  }
  cout << ans << "\n";
  return 0;
}