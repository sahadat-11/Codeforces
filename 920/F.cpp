//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9, mod = 1e9 + 7;
#define int long long
int t[4 * N];
int a[N], d[N];
int merge(int l, int r) { // change this
  return l + r;
}
void build(int n, int b, int e) { 
  if(b == e) {
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
  if(b > j or e < i) return 0; // totally out
  if(b >= i and e <= j) {// totally in
    return t[n];
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void update(int n, int b, int e, int i, int x) {
  if(b > i or e < i) return;
  if(b >= i and e <= i) {
    t[n] = x;
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  update(l, b, mid, i, x);
  update(r, mid + 1, e, i, x);
  t[n] = merge(t[l], t[r]);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i <= N; i++) {
  	for(int j = i; j <= N; j += i) {
  	  d[j]++;
  	}
  }
  int n, q; cin >> n >> q;
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  }
  build(1, 1, n);
  set<int> alive;
  for(int i = 1; i <= n; i++) {
  	if(a[i] > 2) {
  		alive.insert(i);
  	}
  }
  while(q--) {
  	int tp, l, r; cin >> tp >> l >> r;
  	if(tp == 1) {
  	  // for(int i = l; i <= r; i++) {
  	  // 	if(a[i] > 2) {
     //      update(1, 1, n, i, d[a[i]]);
  	  // 	  a[i] = d[a[i]];
  	  // 	}
  	  // }
     auto it = alive.lower_bound(l);
     vector<int> to_delete;
     while(it != alive.end() and (*it) <= r) {
     	int i = *it;
     	update(1, 1, n, i, d[a[i]]);
     	a[i] = d[a[i]];
     	if(a[i] <= 2) {
     		to_delete.push_back(i);
     	}
     	++it;
      }
      for(auto i : to_delete) {
      	alive.erase(i);
      }
  	}
  	else {
  	  cout << query(1, 1, n, l, r) << "\n";
  	}
  }
  return 0;
}