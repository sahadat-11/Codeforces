//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  sort(s.begin(), s.end());
  for(int i = n / 2; i < n; i++) {
    cout << s[i];
    if(i < n - 1) cout << '+';
  }

  return 0;
}