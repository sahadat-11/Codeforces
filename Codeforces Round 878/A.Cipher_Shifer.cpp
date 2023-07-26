//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
   
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    string x;
    for(int i = 0; i < n; i++) {
      x += s[i];
      for(int j = i + 1; j < n; j++) {
        if(s[i] == s[j]) {
          i = j; break;
        }
      }
    }
    cout << x << endl;
  }
  return 0;
}


