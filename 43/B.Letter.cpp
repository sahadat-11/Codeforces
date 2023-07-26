//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s, t;
  getline(cin, s);
  getline(cin, t);
  //cout << s << endl;
  //cout << t << endl;
  map<char, int> mp1, mp2;
  for(auto u : s) {
    mp1[u]++;
  }
  for(auto u : t) {
    mp2[u]++;
  }
  bool flag = true;
  for(int i = 0; i < t.size(); i++) {
    if(t[i] != ' ' ) {
      if(mp1[t[i]] < mp2[t[i]]) flag = false; 
    }
  }
  if(flag) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}

// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  t=1;
  while(t--)
  {
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    map <char,int> mp;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]!=' ')
      mp[s[i]]++;
    }
    int f=0;
    for(int i=0;i<t.size();i++)
    {
      if(t[i]!=' ')
      {
      if(mp.find(t[i])==mp.end() || mp[t[i]]==0) {cout<<"NO\n"; f=1;break;}
      else mp[t[i]]--;
      }
    }
    if(!f) cout<<"YES\n";
    
    
  }
}