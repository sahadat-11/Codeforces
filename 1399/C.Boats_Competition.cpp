//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int pair = 0;
    for(int i = 2; i <= 100; i++) {
      int c = 0;
      int p1 = 0, p2 = n - 1;
      while(p1 < p2) {
        if(a[p1] + a[p2] == i) c++, p1++, p2--;
        else if(a[p1] + a[p2] > i) p2--;
        else p1++;
      }
      pair = max(pair, c);
    }
    cout << pair << "\n";
  }
  return 0;
}
