//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, mod = 1e9 + 7;
int a[N], t[N * 4], lazy[N * 4];
void push(int n, int b, int e) {
	if(lazy[n] == 1) return;
	t[n] = (1ll * t[n] * lazy[n]) % mod; 
	if(b != e) {
		int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	    lazy[l] = (1ll * lazy[l] * lazy[n]) % mod;
	    lazy[r] = (1ll * lazy[r] * lazy[n]) % mod;
	}
	lazy[n] = 1; 
}
void build(int n, int b, int e) {
	lazy[n] = 1;
	if(b == e) {
		t[n] = a[b];
		return;
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[n] = (t[l] + t[r]) % mod;
}

ll query(int n, int b, int e, int i, int j) {
	push(n, b, e);
	if(e < i or j < b) return 0;
	if(b >= i and e <= j) {
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
    return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j)) % mod;
}
void update(int n, int b, int e, int i, int j, int x) {
	push(n, b, e);
	if(e < i or b > j) return;
	if(b >= i and j >= e) {
		lazy[n] = x;
		push(n, b, e);
		return;
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
    update(l, b, mid, i, j, x);
    update(r, mid + 1, e, i, j, x);
    t[n] = (t[l] + t[r]) % mod;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++) a[i] = 1;//because globally 0
    build(1, 1, n);
    //for(int i = 1; i <= 4 * n; i++) cout << t[i] << "\n";
    while(q--) {
    	int typ; cin >> typ;
    	if(typ == 1) {
    		int i, j, x; cin >> i >> j >> x;
    		j--;
    		i++; j++;
    		update(1, 1, n, i, j, x);
    	}
    	else {
    		int i, j; cin >> i >> j;
    		j--;
    		i++; j++;
    		cout << query(1, 1, n, i, j) << "\n";
    	}
    }
    return 0;  
}
//https://prnt.sc/dm3X-yx25dJA