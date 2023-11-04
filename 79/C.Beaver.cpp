//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n; cin >> n; string x[n];
  for(int i = 0; i < n; i++) cin >> x[i];
  int l = 0, r = s.size() - 1;
  while(l < r) {
     string t1 = s.substr(l + 1, r);
     string t2 = s.substr(l, r - 1);
     cout << t1 << " " << t2 << endl;
     bool flag1 = true, flag2 = true;
     for(int i = 0; i < n; i++) {
       if(t1.find(x[i]) != -1) flag1 = false;
     }
     for(int i = 0; i < n; i++) {
       if(t2.find(x[i]) != -1) flag2 = false;
     }
     if(flag1) {
       cout << t1.size();
       //return 0;
     }
     else if(flag2) {
       cout << t2.size();
       //return 0;
     }
     else l++, r--;
  }
  return 0; 
}