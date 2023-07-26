//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    bool flag = true;
    for(int i = 1; i < s.size(); i++) {
      if(s[i] >= 'a') flag = false;
    }
    if(!flag) cout << s << "\n";
    else {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a') s[i] = s[i] - 32;
            else s[i] = s[i] + 32;
        }
        cout << s << "\n";
    }
	return 0;
} 