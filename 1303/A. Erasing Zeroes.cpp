//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 string s; cin >> s;
   	 int n = s.size();
   	 int f = -1, l = -1, cnt = 0;
   	 for(int i = 0; i < n; i++) {
   	 	if(s[i] == '1') {
   	 		f = i; break;
   	 	}
   	 }
   	 for(int i = n -1; i >= 0; i--) {
   	 	if(s[i] == '1') {
   	 		l = i; break;
   	 	}
   	 }
   	 for(int i = f; i <= l; i++) {
   	 	if(s[i] == '0') cnt++;
   	 }
   	 cout << cnt << "\n";
   }
   return 0;
}