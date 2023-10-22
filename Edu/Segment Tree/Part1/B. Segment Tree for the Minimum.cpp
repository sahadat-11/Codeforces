//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, inf = 1e9 + 7;
int a[N], t[4 * N];
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
void update(int n, int b, int e, int i, int x) {
	if(e < i or i < b) return;
	if(b >= i and i >= e) {
		t[n] = x;
		return;
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	update(l, b, mid, i, x);
	update(r, mid + 1, e, i, x);
	t[n] = min(t[l], t[r]);
}
ll query(int n, int b, int e, int i, int j) {
	if(e < i or j < b) return inf;
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
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    while(q--) {
    	int typ; cin >> typ;
    	if(typ == 1) {
    		int i, x; cin >> i >> x;
    		i++; // 1 indexing
    		update(1, 1, n, i, x);
    	}
    	else {
    		int i, j; cin >> i >> j;
    		j--; //i to j - 1;
    		i++; j++;//1 indexing
    		cout << query(1, 1, n, i, j) << "\n";
    	}
    }
    return 0;  
}