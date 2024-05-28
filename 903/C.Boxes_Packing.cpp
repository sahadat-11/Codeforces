//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  map<int, int> mp;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) {
     mp[a[i]]++;
  }
  int mx = 0;
  for(auto [u, v] : mp) {
     if(v > mx) mx = v;
  }
  cout << mx << endl;
  return 0; 
}
//https://prnt.sc/V6Kgh1vEPdqB