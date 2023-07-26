//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int i, sum = 0;
  for(i = 1; i <= n; i++) {
    sum += i * (i + 1) / 2;
    if(sum > n) break;
  }
  cout << i - 1 << "\n";
  return 0;
}
