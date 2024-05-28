//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
#define int long long
const int inf = 1e14 + 9;
int a[N];
int t[4 * N], lazy[4 * N];
void push(int n, int b, int e) { // change this
  if (lazy[n] == 0) return;
  t[n] = t[n] + lazy[n];
  if (b != e) {
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    lazy[l] = lazy[l] + lazy[n];
    lazy[r] = lazy[r] + lazy[n];
  }
  lazy[n] = 0;
}
int merge(int l, int r) { // change this
  return min(l, r);
}
void build(int n, int b, int e) {
  lazy[n] = 0; // change this
  if (b == e) {
    t[n] = a[b];
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[n] = merge(t[l], t[r]);
}
int query(int n, int b, int e, int i, int j) { //(i, j) = range
  push(n, b, e);
  if(b > j or e < i) return inf; // totally out
  if(b >= i and e <= j) {// totally in
    return t[n];
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void update(int n, int b, int e, int i, int j, int v) {
  push(n, b, e);
  if (j < b || e < i) return;
  if (i <= b && e <= j) {
    lazy[n] = v; //set lazy
    push(n, b, e);
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  update(l, b, mid, i, j, v);
  update(r, mid + 1, e, i, j, v);
  t[n] = merge(t[l], t[r]);
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    int q; cin >> q;
    cin.ignore();
    while(q--) {
      string s; getline(cin, s);
      stringstream st(s);
      int x; vector<int> v;
      while(st >> x) {
        v.push_back(x);
      }
      // for(auto u : v) cout << u << " ";
      // cout << "\n";
      int sz = v.size();
      if(sz == 3) {
        int i = v[0], j = v[1], val = v[2];
        i++; j++;
        if(i > j) {
          update(1, 1, n, i, n, val);
          update(1, 1, n, 1, j, val);
        }
        else {
           update(1, 1, n, i, j, val);
        }
      }
      else {
        int i = v[0], j = v[1];
        i++; j++;
        if(i > j) {
          int mn1 = query(1, 1, n, i, n);
          int mn2 = query(1, 1, n, 1, j);
          cout << min(mn1, mn2) << "\n";
        }
        else {
           int mn = query(1, 1, n, i, j);
           cout << mn << "\n";
        }
      }
    }
    return 0;
}


//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
const ll inf = 1e14 + 9;
int a[N];
ll t[4 * N], lazy[4 * N];
void build(int n, int b, int e) {
  if(b == e) {
    t[n] = a[b];
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[n] = min(t[l], t[r]);
}
void push(int n, int b, int e) {
    if(lazy[n] == 0) return;
    t[n] = t[n] + lazy[n];
    if(b != e) {
      int l = 2 * n, r = 2 * n + 1;
      int mid = (b + e) / 2;
      lazy[l] += lazy[n];
      lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}
void update(int n, int b, int e, int i, int j, int x) {
  push(n, b, e);
  if(i > e or j < b) return;
  if(b >= i and j >= e) {
    lazy[n] = x;
    push(n, b, e);
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  update(l, b, mid, i, j, x);
  update(r, mid + 1, e, i, j, x);
  t[n] = min(t[l], t[r]);
}
ll query(int n, int b, int e, int i, int j) {
  push(n, b, e);
  if(i > e or j < b) return inf;
  if(b >= i and j >= e) {
    return t[n];
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
int main() {
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    int q; cin >> q;
    cin.ignore();
    while(q--) {
        string str;
        getline(cin, str);
        stringstream s(str);
        int i, j, x;
        s >> i >> j;
        if(s >> x) {
          //cout << i << j << x << endl;
          i++; j++;
          if(j >= i) {
            update(1, 1, n, i, j, x);
          }
          else {
            update(1, 1, n, i, n, x);
            update(1, 1, n, 1, j, x);
          }
        }
        else {
          //cout << i << j << endl;
          i++; j++;
          ll ans = inf;
          if(j >= i) {
            ans = query(1, 1, n, i, j);
          }
          else {
            ans = min(ans, query(1, 1, n, i, n));
            ans = min(ans, query(1, 1, n, 1, j));
          }
          cout << ans << "\n";
        }
    }
}