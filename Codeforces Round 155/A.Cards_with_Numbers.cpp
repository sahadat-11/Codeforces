//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n; cin >> n; int a[3 * n];
  for(int i = 1; i <= 2*n; i++) cin >> a[i];
  map<int, vector<int>> mp;
  for(int i = 1; i <= 2*n; i++) {
    mp[a[i]].push_back(i);
  }
  //cout << mp.size() << endl;
  bool flag = true;
  for(auto u : mp) {
    auto v = u.second;
    if(v.size() % 2) flag = false;
  }
  if(!flag) cout << -1;
  else {
     for(auto u : mp) {
       auto v = u.second;
       for(int i = 0; i < v.size(); i += 2) cout << v[i] << " " << v[i + 1] << "\n";
     }
  }
  return 0;
}

// approach 2:

#include<bits/stdc++.h>

using namespace std;
#define int long long
const int N = 6e5 + 10;
int a[N];
map < int, int > mp;
signed main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  for (int i = 1; i <= 2 * n; i++) {
    scanf("%lld", & a[i]);
    mp[a[i]]++;
  }
  for (auto t: mp) {
    if (t.second % 2 == 1) {
      cout << -1 << endl;
      return 0;
    }
  }
  mp.clear();
  for (int i = 1; i <= 2 * n; i++) {
    if (mp[a[i]] == 0)
      mp[a[i]] = i;
    else {
      printf("%lld %lld\n", mp[a[i]], i);
      mp[a[i]] = 0;
    }
  }
  return 0;
}

// approach 3:

#include<bits/stdc++.h>

using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  vector < pair < int, int >> a;
  int n, i;
  scanf("%d", & n);
  int b;
  for (i = 0; i < n * 2; i++) {

    scanf("%d", & b);
    a.push_back(make_pair(b, i));
  }
  sort(a.begin(), a.end());
  bool c = true;
  for (i = 0; i < n * 2 - 1; i += 2) {
    if (a[i].first != a[i + 1].first) {
      printf("-1");
      c = false;
      break;
    }
  }
  if (c) {
    for (i = 0; i < n * 2 - 1; i += 2) {
      cout << a[i + 1].second + 1 << ' ' << a[i].second + 1 << '\n';
    }
  }
  return 0;
}