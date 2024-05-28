//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int k; string s; cin >> k >> s;
  map<char, int> mp;
  for(auto u : s) mp[u]++;
  bool flag = true;
  for(auto u : mp) {
  	if(u.second % k) flag = false;
  }
  if(flag) {
  	string x;
  	for(auto u : mp) {
  		for(int i = 0; i < u.second / k; i++) {
  			x += u.first;
  		}
  	}
  	for(int i = 0; i < k; i++) cout << x;
  }
  else cout << "-1\n";
  
  return 0;
}