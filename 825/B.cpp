//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s[10];
   for(int i = 0; i < 10; i++) cin >> s[i];
   bool flag = false;
   for(int i = 0; i < 10; i++) {
   	 int cnt = 0, dot = 0;
   	 for(int j = 0; j < 10; j++) {
       if(s[i][j] == 'X') cnt++;
       //else if(s[i][j] == 'O') cnt = 0;
       else if(s[i][j] == '.') dot++;
       if(cnt == 4 and dot == 1) flag = true;
   	 }
   	 // if(flag) cout << "YES\n";
     // else cout << "NO\n";
   }
   // if(flag) cout << "YES\n";
   // else cout << "NO\n";
   for(int i = 0; i < 10; i++) {
   	 int cnt = 0, dot = 0;
   	 for(int j = 0; j < 10; j++) {
       if(s[j][i] == 'X') cnt++;
       //else if(s[i][j] == 'O') cnt = 0;
        else if(s[i][j] == '.') dot++;
       if(cnt == 4 and dot == 1) flag = true;
   	 }
   }
   // if(flag) cout << "YES\n";
   // else cout << "NO\n";
   int cnt = 0, dot = 0;
   for(int i = 0; i < 10; i++) {
   	 for(int j = 0; j < 10; j++) {
   	   if(i == j) {
          if(s[i][j] == 'X') cnt++;
          //else if(s[i][j] == 'O') cnt = 0;
           else if(s[i][j] == '.') dot++;
          if(cnt == 4 and dot == 1) flag = true;
   	   }
   	 }
   }
   // if(flag) cout << "YES\n";
   // else cout << "NO\n";
   cnt = 0, dot = 0;
   for(int i = 0; i < 10; i++) {
   	 for(int j = 0; j < 10; j++) {
   	   if(i + j == 10 - 1) {
          if(s[i][j] == 'X') cnt++;
          //else if(s[i][j] == 'O') cnt = 0;
           else if(s[i][j] == '.') dot++;
          if(cnt == 4 and dot == 1) flag = true;
   	   }
   	 }
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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