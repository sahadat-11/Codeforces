//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  if(n % 2 == 0 and n % 4 == 0) {
    cout << n / 4 - 1 << "\n";
  }
  else if(n % 2 == 0 and n % 4 != 0) {
    cout << n / 4 << "\n";
  }
  else {
    cout << "0\n";
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   if(n % 2) {
   	 cout << 0 << "\n";
   }
   else {
   	 n /= 2;
   	 if(n % 2 == 0) cout << n / 2 - 1;
   	 else cout << n / 2;
   }
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   if(n & 1) cout << "0\n";
   else {
      n /= 2;
   ll cnt = 0;
   for(ll i = 1, j = n - 1; i < j; i++, j--) {
      cnt++;
      //cout << i << " " << j << endl;
   }
   cout << cnt << "\n";
   }
   
   return 0;
}

// https://prnt.sc/eNPYXNW8ANFg