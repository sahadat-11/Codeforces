//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  if((n <= 10) or (n > 21)) cout << 0;
  else if((n >= 11 and n <= 19) or (n == 21)) cout << 4;
  else  cout << 15;
  return 0; 
}
