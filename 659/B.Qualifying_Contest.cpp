//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   vector<vector<pair<int, string>>> v(m);
   for(int i = 0; i < n; i++) {
      string s; int id, point; cin >> s >> id >> point;
      id--;
      v[id].push_back({point, s});
   }
   for(int i = 0; i < m; i++) {
      sort(v[i].rbegin(), v[i].rend());
      if(v[i].size() > 2 and v[i][1].first == v[i][2].first) { // we can not decide 2nd or 3rd person who is participate
         cout << "?\n";
      }
      else {
         cout << v[i][0].second << " " << v[i][1].second << "\n";
      }
   }

   return 0;
}
