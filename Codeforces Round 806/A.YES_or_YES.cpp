//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while(t--) {
      string s; cin >> s;
      for(int i = 0; i < 3; i++) if(s[i] <= 'Z') s[i] += 32;
      if(s == "yes") cout << "YES\n";
      else cout << "NO\n";
    } 
	return 0;
}

