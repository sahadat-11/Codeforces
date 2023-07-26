//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; 
  map<string, int> mp;
  while(n--) {
    string s; cin >> s;
    if(mp.find(s) == mp.end()) cout << "OK\n";
    else cout << s << mp[s] << "\n";
    mp[s]++;
  }
  return 0;
}
// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main() {
  map < string, int > m;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (m[s] == 0) {
      cout << "OK" << "\n";
    } else {
      cout << s << m[s] << "\n";
    }
    m[s]++;
  }
}