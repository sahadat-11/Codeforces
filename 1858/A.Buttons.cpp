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
