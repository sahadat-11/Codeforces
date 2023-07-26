//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n; string s[2 * n];
     vector<string> v;
     for(int i = 0; i < 2 * n - 2; i++) {
       cin >> s[i];
       if(s[i].size() == n - 1) v.push_back(s[i]);
     }
     string a = v[0];
     string b = v[1];
     //cout << a << " " << b << "\n";
     string c = string(a.rbegin(), a.rend());
     if(b == c) cout << "YES\n";
     else cout << "NO\n";
     
   }
    return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t; cin >> t;
  while(t--){
    vector<string>v;
    int n;
    cin >> n;
    for(int i = 1 ; i <= 2*n-2 ; i++){
      string s;
      cin >> s;
      if(s.size() == n-1)
        v.push_back(s);
    }
    reverse(v[0].begin(),v[0].end());
    if(v[0] == v[1])
      cout << "yes\n";
    else
      cout << "no\n";
  }
  return 0;
}
