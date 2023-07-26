//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    string s; cin >> s;
    int x = s.size();
    int cnt = 0;
    while(x > 1) {
        int sum = 0;
        for(int i = 0; i < x; i++) sum += (s[i] - '0'); 
        //cout << sum << endl;
        s = to_string(sum);
        //cout << s << endl;
        x = s.size(); 
        cnt ++;           
    }
   cout << cnt << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //int t; cin >> t; 
    //while(t--) {
        solve();
   // }
    return 0;
} 

// approach 2;
#include<bits/stdc++.h>
using namespace std;
int main() {
  int sum = 0, res = 0;
  string s;
  cin >> s;
  while (s.size() > 1) {
    sum = 0;
    for (int i = 0; i < s.size(); i++) {
      sum += s[i] - '0';
    }
    s = to_string(sum);
    res++;
  }
  cout << res;
  return 0;
}