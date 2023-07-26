//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  map<char, int> mp;
  for(auto u : s) {
    mp[u]++;
  }
  int odd = 0;
  for(auto u : mp) {
    if(u.second % 2) odd++;
  }
  if(odd == 0 or odd % 2) cout << "First";
  else cout << "Second";
  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int odd = 0;
    map<char,int> mp;
    for (int i = 0; i < s.size(); ++i) {
        mp[s[i]]++;
    }
    for (char i = 'a';i <= 'z'; ++i) {
        if (mp[i]%2) odd++;
    }
    if (odd == 0 or odd % 2) cout << "First";
    else cout << "Second";
 
  }