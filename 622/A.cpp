//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   ll n; cin >> n;
   ll sum, i;
   for(i = 1; i < n; i++) {
   	sum = (i * (i + 1) / 2);
   	if(sum >= n) break;
   }
   sum = ((i - 1) * (i) / 2);
   cout << n - sum << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    for(ll i = 1; i < n; i++) {
        n -= i;
    }
    cout << n << "\n";
    return 0;
} 

// https://prnt.sc/2BB-w3UgzvBG