//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	string s; cin >> s;
  	int n = s.size();
  	vector<int> v;
  	v.push_back(0);
  	for(int i = 0; i < n; i++) {
  		if(s[i] == 'R') v.push_back(i + 1);
  	}
  	v.push_back(n + 1);
  	int mx = 0;
  	for(int i = 1; i < v.size(); i++) {
       mx = max(mx, v[i] - v[i - 1]);
  	}
  	cout << mx << "\n";
  }
  return 0;
}