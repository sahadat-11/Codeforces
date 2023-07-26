//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int one = 0, zero = 0;
  int mx = 0;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '1') {
       one++;
       mx = max(one, mx);
    }
    else one = 0;
  }
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '0') {
       zero++;
       mx = max(zero, mx);
    }
    else zero = 0;
  }
  if(mx >= 7) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
cout<<(s.find("1111111")!=-1||s.find("0000000")!=-1?"YES":"NO");
}

// approach 3:

#include<bits/stdc++.h>
using namespace std;
int main(){
string s; cin >> s;
cout<<(strstr(s,"0000000")||strstr(s,"1111111")?"YES":"NO");
return 0;
}