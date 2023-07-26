//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; getline(cin, s);
  //cout << s << endl;
  int n = s.size();
  //cout << s.size() << endl;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == ' ' and s[i + 1] == ' ') {
      s.erase(s.begin() + i);
      i--;
    }
    if(s[i] == ' ' and (s[i + 1] == ',' or s[i + 1] == '.' or s[i + 1] == '?' or s[i + 1] == '!')) {
      s.erase(s.begin() + i);
      i--;
    }
    if((s[i] == ',' or s[i] == '.' or s[i] == '?' or s[i] == '!') and (s[i + 1] != ' ')) s.insert(i + 1, 1, ' ');
    
  }
  //cout << s.size() << endl;
  cout << s << endl;

  return 0; 
}
