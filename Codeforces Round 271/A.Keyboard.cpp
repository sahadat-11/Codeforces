//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string x = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char c; cin >> c;
  string s; cin >> s;
  string ans;
  if(c == 'R') {
    for(int i = 0; i < s.size(); i++) {
      for(int j = 0; j < x.size(); j++) {
        if(s[i] == x[j]) ans += x[j - 1];
      }
    } 
  }
 else {
    for(int i = 0; i < s.size(); i++) {
      for(int j = 0; j < x.size(); j++) {
        if(s[i] == x[j]) ans += x[j + 1];
      }
    } 
  }
  cout << ans << endl;

  return 0;
}

// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main(){
  string a,s="qwertyuiopasdfghjkl;zxcvbnm,./";
  char c;
  cin>>c>>a;
  int n=a.size();
  int m=s.size();
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(s[j]==a[i]){
        if(c=='R')cout<<s[j-1];
        else cout<<s[j+1];
      }
    }
  }
}

// approach 3:

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string x = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char c; cin >> c;
  string s; cin >> s;
  string ans; int t;
  if(c == 'R') t = 1;
  else t = -1;

  for(int i = 0; i < s.size(); i++) {
    s[i] = x[x.find(s[i]) - t];
  }
  cout << s << endl;
  return 0;
}