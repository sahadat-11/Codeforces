//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; string s; cin >> n >> s;
  map<char, int> mp;
  int cnt = 0;
  for(int i = 0; i < s.size(); i += 2) {
  	mp[s[i]]++;
  	if(mp[tolower(s[i + 1])] > 0) mp[tolower(s[i + 1])]--;
  	else cnt++;
  }	
  cout << cnt << "\n";
  return 0;
}