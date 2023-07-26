//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  int five = 0, zero = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] == 5) five++;
    else zero++;
  }
  if(zero == 0) cout << "-1\n";
  else if(five < 9) cout << "0\n";
  else {
    for(int i = 1; i <= (five / 9) * 9; i++) cout  << 5;
    for(int i = 1; i <= zero; i++) cout << 0;
  }
  return 0;
}