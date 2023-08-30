//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
 string s; cin >> s;
    int n = s.size();
    int indx = n; //== -1;
    for(int i = n - 1; i; i--) {
      if(s[i] >= '5') {
        indx = i;
        s[i - 1]++;
      } 
    }
    if(s[0] >= '5') {
      cout << 1;
      indx = 0;
    }
    for(int i = indx; i < n; i++) s[i] = '0';
    cout << s << "\n";
    
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  } 
  return 0;
}

