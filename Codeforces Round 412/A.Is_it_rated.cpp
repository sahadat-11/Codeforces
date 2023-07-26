//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n], b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  bool flag = false, f = false;
  for(int i = 0; i < n; i++) {
    if(a[i] != b[i]) flag = true;
  }
  if(!flag) {
    for(int i = 1; i < n; i++) {
    if(a[i] > a[i - 1] or (b[i] > b[i - 1])) f = true;
    }
  }
  if(flag) cout << "rated";
  else if(!flag and f) cout << "unrated";
  else cout << "maybe";
  return 0;
  
}