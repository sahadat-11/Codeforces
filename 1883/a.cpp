//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
      string s; cin >> s;
      int sum = 0;
      if(s[0] == '0') sum += 9;
      else sum += (s[0] - '1');
      for(int i = 1; i < s.size(); i++) {
      	if(s[i] == '0' and s[i - 1] == '0') sum += 0;
      	else if(s[i] == '0' or s[i - 1] == '0') sum += (10 - abs(s[i] - s[i - 1]));
      	else {
      		sum += (abs(s[i] - s[i - 1]));
      	}
      }
      cout << sum + 4 << endl;
    } 
    return 0;  
}