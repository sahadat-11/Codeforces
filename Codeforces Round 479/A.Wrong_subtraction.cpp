//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k; cin >> n >> k;
  while(k--) {
    if(n % 10 == 0) n /= 10;
    else n--;
  }
  cout << n << "\n";

  return 0;
}
