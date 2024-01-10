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
   	 int fre[27] = {0};
   	 for(auto u : s) fre[u - 'A' + 1]++;
   	 int cnt = 0;
   	 for(int i = 1; i <= 26; i++) {
   	 	if(fre[i] >= i) cnt++;
   	 }
   	 cout << cnt << '\n';
   }
   return 0;
}