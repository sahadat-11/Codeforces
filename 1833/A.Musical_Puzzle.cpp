//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e9;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      int t; cin >> t;
      while(t--) {
        int n; string s; cin >> n >> s;
        set<string> st;
        for(int i = 0; i < n - 1; i++) {
          st.insert(s.substr(i, 2));
        }
        cout << st.size() << "\n";
      }
    return 0;
}