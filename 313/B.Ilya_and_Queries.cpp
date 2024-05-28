//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   s.insert(s.begin() + 0, 1, '$');
   //cout << s << endl;
   int n = s.size();
   int pre_sum[n] = {0};
   for(int i = 1; i < n; i++) {
     if(s[i] == s[i + 1]) {
        pre_sum[i] = pre_sum[i - 1] + 1;
     }
     else {
       pre_sum[i] = pre_sum[i - 1];
     }
   }
   for(int i = 0; i < n; i++) cout << pre_sum[i] << " ";
   cout << endl;
   int q; cin >> q;
   while(q--) {
     int l, r; cin >> l >> r;
     r--;
     cout << pre_sum[r] - pre_sum[l - 1] << endl;
   }
   return 0;
}
//https://prnt.sc/Xp010cAK2qFe