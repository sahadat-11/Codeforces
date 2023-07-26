//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while(t--) {
      string s; cin >> s;
      int n = s.size();
      bool flag = true;
      for(int i = 0; i < n; i++) {
        if(s[i] == s[i + 1] and s[i] != '?') {
          flag = false;
          break;
      }
      if(s[i] == '?') {
        if(s[i - 1] != 'a' and s[i + 1] != 'a') s[i] = 'a';
        else if(s[i - 1] != 'b' and s[i + 1] != 'b') s[i] = 'b';
        else s[i] = 'c';
      }
    }
      if(flag) cout << s << "\n";
      else cout << "-1\n";
    }
    return 0;
}

// approach 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solve() {
        string s; cin >> s;
        for(ll i = 0; i < s.size()-1; i++) {
            if(s[i] != '?' and (s[i] == s[i+1])) {
                cout << "-1\n";
                return ;
            }
        }

        if(s[0] == '?') {
            if(s[1] == 'c') s[0] = 'a';
            else if(s[1] == 'a') s[0] = 'b';
            else s[0] = 'a';
        }
        if(s[s.size() - 1] == '?') {
            if(s[s.size()- 2] == 'c') s[s.size()- 1] = 'a';
            else if(s[s.size()-2] == 'a') s[s.size()- 1] = 'b';
            else s[s.size()-1] = 'a';
        }

        for(ll i = 1; i < s.size()-1; i++) {
            if(s[i] == '?') {
                if(s[i-1] == 'a') {
                    if(s[i+1] == 'b') s[i] = 'c';
                    else if(s[i+1] == 'c') s[i] = 'b';
                    else s[i] = 'b';
                }
                if(s[i-1] == 'b') {
                    if(s[i+1] == 'a') s[i] = 'c';
                    else if(s[i+1] == 'c') s[i] = 'a';
                    else s[i] = 'c';
                }
                if(s[i-1] == 'c') {
                    if(s[i+1] == 'a') s[i] = 'b';
                    else if(s[i+1] == 'b') s[i] = 'a';
                    else s[i] = 'a';
                }
            }
        }
        cout << s << endl;

}
int main() {
    sahadat();
    ll t; cin >> t;
    while(t--) {
       solve();
    }
   return 0;
}