//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    map<string, string> mp;
    while(m--) {
        string a, b; cin >> a >> b;
        if(a.size() > b.size()) {
            mp.insert({a, b});
            mp.insert({b, b});
        }
        else {
            mp.insert({b, a});
            mp.insert({a, a});
        }
    }
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        cout << mp[s] << " ";
    }
    return 0;
} 

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, m; cin >> n >> m;
  map < string, string > s;
  string a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    if (a.length() <= b.length())
    s[a] = a;
    else s[a] = b;
  }
  for (int i = 0; i < n; i++) {
    cin >> c;
    cout << s[c] << " ";
  }
  return 0;
}

// approach 3:

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    map<string, string> mp;
    cin >> n >> m;
    while (m--) {
        string s, ss;
        cin >> s >> ss;
        mp[s] = ss;
    }
    while (n--) {
        string s;
        cin >> s;
        if (mp[s].length() < s.length())
            cout << mp[s] << " ";
        else
            cout << s << " ";
    }
    return 0;
}