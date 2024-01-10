//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; string s; cin >> n >> k >> s;
   string pre = "", suf = "", x = "", ans = "";
   for(int i = 1; i < n; i++) {
     pre = pre + s[i - 1];
     suf = s[n - i] + suf;
     if(pre == suf) {
       x = pre;
     }
   }
   for(int i = 0; i < n - x.size(); i++) {
     ans += s[i];
   }
   for(int i = 1; i < k; i++) cout << ans;
   cout << s << "\n";
   return 0;
}