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
    map<int, vector<int>> mp;
    while(n--) {
      int x, y; cin >> x >> y;
      mp[x].push_back(y);
    }

    ll ans = 0;
    for(auto u : mp) {
      int x = u.first;
      auto y = u.second;
      sort(y.rbegin(), y.rend());
      int sz = y.size();
      for(int i = 0; i < min(sz, x); i++) {
        ans += y[i];
      }
    }
    cout << ans << "\n";
  }
  
  return 0;
}

// approach 2:

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
    priority_queue<int> pq[n + 1];
    for(int i = 0; i < n; i++){
      int x, y; cin >> x >> y;
      pq[x].push(y);
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
      int j = 0;
      while(!pq[i].empty() and i > j) {
        ans += pq[i].top();
        pq[i].pop();
        j++;
      }
    }
    cout << ans << "\n";
  }
  
  return 0;
}

// approach 3:

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int q;
  cin >> q;
  while (q--)
  {
    ll n, x, y, s = 0;
    cin >> n;
    vector<vector<int>> v(n + 1);
    for (int i = 0; i < n; i++)
    {
      cin >> x >> y;
      v[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
      ll mn = min(i, (int)v[i].size());
      sort(v[i].rbegin(), v[i].rend());
      for (int j = 0; j < mn; j++)
      {
        s += v[i][j];
      }
    }
    cout << s << endl;
  }
}