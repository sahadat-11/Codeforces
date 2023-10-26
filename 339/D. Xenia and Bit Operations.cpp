// //In The Name of AllAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e5 + 7;
// int a[N];
// ll t[4 * N];
// void build(int n, int b, int e) {
	// if(b == e) {
		// t[n] = a[b];
		// return;
	// }
	// int l = 2 * n, r = 2 * n + 1;
	// int mid = (b + e) / 2;
	// build(l, b, mid);
	// build(r, mid + 1, e);
	// t[n] = t[l] | t[r];
// }
// void update(int n, int b, int e, int i, int x) {
	// if(e < i or i < b) return;
	// if(b >= i and i >= e) {
		// t[n] = x;
		// return;
	// }
	// int l = 2 * n, r = 2 * n + 1;
	// int mid = (b + e) / 2;
	// update(l, b, mid, i, x);
	// update(r, mid + 1, e, i, x);
	// t[n] = t[l] | t[r];
// }
// ll query(int n, int b, int e, int i, int j) {
	// if(e < i or j < b) return 0;
	// if(b >= i and j >= e) {
		// return t[n];
	// }
	// int l = 2 * n, r = 2 * n + 1;
	// int mid = (b + e) / 2;
	// return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
// }
// int main() {
	// ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // int n, q; cin >> n >> q;
    // for(int i = 1; i <= n; i++) cin >> a[i];
    // build(1, 1, n);
    // while(q--) {
    	// int i, x; cin >> i >> x;
    	// update(1, 1, n, i, x);
    	// cout << t[1] << "\n";
    // }
    // return 0;  
// }
// // or solution
//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = (1 << 17) + 9;
int a[N];
ll t[4 * N];
int merge(int left, int right, int segment_l, int segment_r) {
   int segment_len = segment_r - segment_l + 1;
   // int pow = 0;
   // while(segment_len > 1) {
   	 // pow++;
   	 // segment_len /= 2;
   // }
   int pow = __lg(segment_len);
   if(pow % 2 == 1) {
   	 return left | right;
   }
   else {
   	return left ^ right;
   }
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
	t[n] = merge(t[l], t[r], b, e);
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
	t[n] = merge(t[l], t[r], b, e);
}
ll query(int n, int b, int e, int i, int j) {
	if(e < i or j < b) return 0;
	if(b >= i and j >= e) {
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
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
// or xor or xor solution