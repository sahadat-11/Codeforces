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
    string s; cin >> s;
    if(s[1] == '+') ans++;
    else ans--;
  }
  cout << ans << "\n";
  return 0;
}