//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      for(int i = 0; i < n; i++) {
        int x; string s; cin >> x >> s;
        for(int j = 0; j < x; j++) {
          if(s[j] == 'D') a[i] = (a[i] + 1) % 10;
          else a[i] = (a[i] - 1 + 10) % 10;
        }
      }
      for(int i = 0; i < n; i++) cout << a[i] << " "; cout << "\n";
    } 
	return 0;
}

