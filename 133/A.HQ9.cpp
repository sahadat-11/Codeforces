//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  bool flag = false;
  if(s.find('H') != -1) flag = true;
  if(s.find('Q') != -1) flag = true;
  if(s.find('9') != -1) flag = true;
  
  if(flag) cout << "YES";
  else cout << "NO";
  return 0;
}