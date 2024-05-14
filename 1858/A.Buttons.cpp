//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 ll a, b, c; cin >> a >> b >> c;
   	 a = a + (c + 1) / 2, b = b + (c / 2);
   	 if(a > b) cout << "First\n";
   	 else cout << "Second\n";
   }
   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, c; cin >> a >> b >> c;
   a += (c / 2 + c % 2);
   b += c / 2;
   if(a > b) cout << "First\n";
   else cout << "Second\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}