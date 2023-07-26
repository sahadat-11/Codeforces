//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  int x = min(n, m);
  if(x % 2) cout << "Akshat";
  else cout << "Malvika";
  return 0;
  
}