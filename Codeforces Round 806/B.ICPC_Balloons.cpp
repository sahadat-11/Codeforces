//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while(t--) {
      int n; cin >> n; string s; cin >> s;
      map<char, int> mp;
      for(auto u : s) mp[u]++;
      int sum = 0;
      for(auto u : mp) sum += u.second + 1;
      cout << sum << "\n";
    } 
	return 0;
}

