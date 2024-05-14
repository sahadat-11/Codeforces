//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int a, b; cin >> a >> b;
    cout << (a ^ b) << "\n";
  }
  return 0;
}
//https://prnt.sc/I7PxPVjq_lT7



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int a, b; cin >> a >> b;
   int x = 0;
   for(int bit = 0; bit < 31; bit++) {
     if(((a >> bit) & 1) != ((b >> bit) & 1)) {
        x += (1 << bit);
     }
   }
   cout << x << "\n"
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/kYnh1zQe1fTR