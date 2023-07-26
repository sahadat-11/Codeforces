//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int k, r; cin >> k >> r;
  for(int i = 1; i <= 9; i++) {
    if(k * i % 10 == 0 or (k * i % 10 == r)) {
      cout << i << "\n";
      return 0;
    }
  }
  return 0;
  
}