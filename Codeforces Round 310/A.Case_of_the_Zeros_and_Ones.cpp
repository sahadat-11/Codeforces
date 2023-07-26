//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  int one = count(s.begin(), s.end(), '1');
  int zero = count(s.begin(), s.end(), '0');
  cout << n - 2 * min(one, zero);
  return 0; 
}