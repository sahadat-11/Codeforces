//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isvowel(char ch) {
   if(ch == 'a' or ch == 'e') return true;
   return false;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; string s; cin >> n >> s;
      string ans;
      int i;
      for(i = 0; i < n; ) {
         if(!isvowel(s[i + 2])) {
            if(!isvowel(s[i + 3])) {
               string x = s.substr(i, 3);
               i += 3;
               ans.append(x);
               ans.push_back('.');
            }
            else {
               string x = s.substr(i, 2);
               i += 2;
               ans.append(x);
               ans.push_back('.');
            }
         } 
      }
      for(int j = 0; j < ans.size() - 1; j++) cout << ans[j];
      for(int j = i; j < n; j++) cout << s[j];
      cout << "\n";
   } 
   return 0;
}
