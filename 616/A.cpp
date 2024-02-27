//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string a, b; cin >> a >> b;
   int ind1 = -1, ind2 = -1;
   for(int i = 0; i < (int)a.size(); i++) {
      if(a[i] == '0') {
      	ind1++;
      }
      else break;
   }
   for(int i = 0; i < (int)b.size(); i++) {
      if(b[i] == '0') {
      	ind2++;
      }
      else break;
   }
   //cout << ind1 << " " << ind2 << "\n";
   a.erase(0, ind1 + 1); b.erase(0, ind2 + 1);
   //cout << a << " " << b << "\n";
   if((int)a.size() > (int)b.size()) {
   	 cout << ">";
   }
   else if((int)a.size() < (int)b.size()) {
   	 cout << "<";
   }
   else if(a > b) cout << ">";
   else if(a < b) cout << "<";
   else cout << "=";
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