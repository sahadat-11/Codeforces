//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string a; cin >> a; string s[5];
   for(int i = 0; i < 5; i++) cin >> s[i];
   bool flag = false;
   for(int i = 0; i < 5; i++) {
   	 if(s[i][0] == a[0] or s[i][1] == a[1]) flag = true;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}