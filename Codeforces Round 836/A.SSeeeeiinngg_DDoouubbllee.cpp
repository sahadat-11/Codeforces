//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     string s; cin >> s;
     sort(s.begin(),s.end());
     string temp = string(s.rbegin(),s.rend());
     cout << s + temp << "\n";
   }
    return 0;
}
