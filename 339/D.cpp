//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = (1 << 17) + 9;
int a[N];
int t[4 * N];
int merge(int a, int b, int seg_s, int seg_e) { // change this
  int pw = __lg(seg_e - seg_s + 1);
  if(pw % 2 == 1) { 
  }
  return a ^ b;
}
void pull(int n, int l, int r, int b, int e) { // change this
  t[n] = merge(t[l], t[r], b, e);
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
	pull(n, l, r, b, e);
}
int query(int n, int b, int e, int i, int j) { //(i, j) = range
	if(b > j or e < i) return 0; // totally out
	if(b >= i and e <= j) {// totally in
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j), b, e);
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
	pull(n, l, r, b, e);
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    n = (1 << n);
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    while(q--) {
       int i, x; cin >> i >> x;
       update(1, 1, n, i, x);
       cout << t[1] << "\n";
    }
    return 0;
}