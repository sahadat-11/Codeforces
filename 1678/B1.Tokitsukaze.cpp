//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; string s; cin >> n >> s;
     int cnt = 0;
     for(int i = 0; i < n; i += 2) {
       if(s[i] != s[i + 1]) cnt++;
     }
     cout << cnt << "\n";
   }
   return 0;
}