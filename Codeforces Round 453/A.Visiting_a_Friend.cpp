//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 106;
vector<pair<int, int>> v;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  set<int> st;
  for(int i = 1; i <= n; i++) {
    int a, b; cin >> a >> b;
    v.push_back({a, b});
  }
  //sort(v.begin(), v.end());
  //for(auto u : v) cout << u.first << " " << u.second << endl;
  bool found = false;
  //sort(v.begin(), v.end());
  //int cnt = 0;
  if(v[0].first != 0) {
    cout << "NO";
    return 0;
  } 
  for(int i = 0; i <= n; i++) {
    if(st.find(m) != st.end()) found = true;
    for(int j = v[i].first; j <= v[i].second; j++) st.insert(j);
    if(v[i].second < v[i + 1].first and (st.find(v[i + 1].first) == st.end())) break;
    //cnt++;
  }
  //cout << cnt <<  endl;
  if(st.find(m) != st.end()) found = true;
  //for(auto u : st) cout << u << " ";
  if(found) cout << "YES";
  else cout << "NO";

  return 0; 
}
// approach 2;
#include <bits/stdc++.h>
using namespace std;
#define int long long
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  int p = 0;
  bool pos = true;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (a > p) pos = false;
    p = max(p, b);
  }
  if (p < m) pos = false;
  if (pos) cout << "YES\n";
  else cout << "NO\n";
}
// approach 3:

#include <bits/stdc++.h>
using namespace std;
void Void(){
    ll n , m;
    cin >> n >> m;
    ll a = 0 , b = 0;
    while(n--){
        ll a1 , b1;
        cin >> a1 >> b1;
        if(b < b1 && b >= a1){
            a = a1;
            b = b1;
        }
    }
    if(b < m)cout << "NO";
    else cout << "YES";
}

int main(){
    ll t = 1;
//    cin >> t;
    while(t--)Void();
}
