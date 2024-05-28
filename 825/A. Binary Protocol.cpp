//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; string s; cin >> s;
  int sum = 0;
  string ans;
  int z = count(s.begin(), s.end(), '0');
  for(int i = 0; i < n; i++) {
  	if(s[i] != '0') sum++;
  	else {
  		if(s[i - 1] == '0') ans += '0';
  		else ans += (sum + '0');
  		sum = 0;
  	}
  }
  if(s[n - 1] != '0') ans += (sum + '0');
  if(s[n - 1] == '0') ans += '0';
  cout << ans << "\n";
  return 0;
}