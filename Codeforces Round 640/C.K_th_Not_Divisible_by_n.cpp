//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    int st = ((k - 1) / (n - 1));
    cout << k + st << "\n";
  }
 
  return 0;
}
