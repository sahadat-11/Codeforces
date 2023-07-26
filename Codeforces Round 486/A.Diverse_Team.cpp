//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  unordered_map<int, int> fre;
  set<int> st;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) {
    if(fre[a[i]] == 0) st.insert(i + 1);
    fre[a[i]]++;
    if(st.size() == k) break;
  }
  //for(auto u : st) cout << u << " ";
  //cout << st.size();
  if(st.size() < k) cout << "NO\n";
  else {
    cout << "YES\n";
    for(auto u : st) cout << u << " ";
  }
  return 0;
}

// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, n, num;
  cin >> n >> k;
  unordered_set < int > st;
  vector < int > ans;
  for (int i = 0; i < n; ++i) {
    cin >> num;
    if (st.insert(num).second) ans.push_back(i + 1);
  }
  if (st.size() < k) cout << "NO";
  else {
    cout << "YES\n";
    for (int i = 0; i < k; ++i) cout << ans[i] << " ";
  }
}

// approach 3:

#include<bits/stdc++.h>
using namespace std;

int vis[101];
int main() {
  int n, k;
  cin >> n >> k;
  vector<int>v;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;

    if (!vis[x]) v.push_back(i);
    vis[x]++;
  }
  if (v.size() < k)cout << "NO\n";
  else {
    cout << "YES\n";
    for (int i = 0; i < k; i++)cout << v[i] << " ";
  }

}

// approach 4:

#include <bits/stdc++.h>

using namespace std;
int main() {

  int n, k, x, frq[105] = {
    0
  };
  vector < int > v;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (frq[x] == 0 && v.size() < k) {
      frq[x]++;
      v.push_back(i + 1);
    }
  }

  if (v.size() < k) {
    cout << "NO\n";
    return 0;
  } else {
    cout << "YES\n";
  }

  for (auto it: v) 
    cout << it << ' ';

}