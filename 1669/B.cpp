//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
#define int long long
int a[N];
int t[4 * N], lazy[4 * N];
void push(int n, int b, int e) { // change this
  if (lazy[n] == 0) return;
  t[n] = (e - b + 1) * lazy[n];
  if (b != e) {
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    lazy[l] = lazy[n];
    lazy[r] = lazy[n];
  }
  lazy[n] = 0;
}
int merge(int l, int r) { // change this
  return l + r;
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
  if(b > j or e < i) return 0; // totally out
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
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    //for(int i = 1; i <= n; i++) cout << a[i] << " ";
    build(1, 1, n);
    while(q--) {
      int tp; cin >> tp;
      if(tp == 1) {
        int i, v; cin >> i >> v;
        update(1, 1, n, i, i, v);
        cout << query(1, 1, n, 1, n) << "\n";
      }
      else {
        int v; cin >> v;
        update(1, 1, n, 1, n, v);
        cout << query(1, 1, n, 1, n) << "\n";
      }
    }
    return 0;
}