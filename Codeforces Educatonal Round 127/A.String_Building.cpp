//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve() {
   string s; cin >> s;
   string check; check += s[0];
   for(int i = 1; i <= s.size(); i++) {
     if(s[i] == s[i - 1]) check += s[i];
     else {
       ll x = check.size();
       if(x < 2) return false;
       check.clear();
       check += s[i];
     } 
   }
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     if(solve()) cout << "YES\n";
     else cout << "NO\n";
   }
    return 0;
}


// approach 2:
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve() {
   string s; cin >> s;
   for(int i = 0; i < s.size(); i++) {
     if(s[i] != s[i + 1] and s[i] != s[i - 1]) return false;
   }
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     if(solve()) cout << "YES\n";
     else cout << "NO\n";
   }
    return 0;
}

// approach 3: 
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while(t--){
      string s;cin>>s;
      if(regex_match(s,regex("(aa|aaa|bb|bbb)+"))) cout<<"YES\n";
      else cout<<"NO\n";
  }
  return 0;
}
