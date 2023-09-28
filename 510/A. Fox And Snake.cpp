//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m; char s[n + 1][m + 1];
   for(int i = 1; i <= n; i++) {
   	 for(int j = 1; j <= m; j++) s[i][j] = '#';
   }
   for(int i = 2; i <= n; i += 2) {
   	 if(i % 2 == 0 and i % 4 == 0) {
   	 	s[i][1] = '#';
   	 	for(int j = 2; j <= m; j++) s[i][j] = '.';
   	 	
   	 }
   	 else {
   	 	for(int j = 1; j < m; j++) s[i][j] = '.';
   	 	s[i][m] = '#';
   	 }
   }
   for(int i= 1; i <= n; i++) {
   	 for(int j = 1; j <= m; j++) {
   	 	cout << s[i][j];
   	 }
   	 cout << "\n";
   }
   return 0;
}