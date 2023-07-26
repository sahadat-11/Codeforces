//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 1; i < n; i++) {
    if(i % 2) cout << "I hate that ";
    else cout << "I love that ";
  }
  if(n % 2) cout << "I hate it ";
  else cout << "I love it ";
  return 0;
  
}