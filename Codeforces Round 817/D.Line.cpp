//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    ll sum = 0;
    int b[n];
    for(int i = 0; i < n; i++) {
      if(s[i] == 'L') b[i] = i;
      else b[i] = (n - i - 1);
      sum += b[i];
    }
    sort(b, b + n);
    for(int i = 0; i < n; i++) {
      if(b[i] < n / 2) sum += n - 2 * b[i] - 1;
      cout << sum << " ";
    }
    cout << "\n";
  }
  return 0;
}