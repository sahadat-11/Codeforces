//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
ll inf = 1e14 + 7;
int a[N];
ll t[4 * N], lazy[4 * N];
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
void update(int n, int b, int e, int i, int j, int x) {
	push(n, b, e);
	if(e < i or j < b) return;
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
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    int q; cin >> q;
    cin.ignore();
    while(q--) {
    	string line;
    	getline(cin, line);
    	stringstream ss(line);
    	int i, j, x;
    	ss >> i >> j;
        if(ss >> x) {
        	//cout << i << " " << j << " " << x << '\n';
        	i++; j++;
        	if(i <= j) {
        		update(1, 1, n, i, j, x);
        	}
        	else {
        		update(1, 1, n, i, n, x);
        		update(1, 1, n, 1, j, x);
        	}
        }
        else {
        	//cout << i << " " << j << "\n";
        	i++; j++;
        	if(i <= j) {
        		ll ans1 = query(1, 1, n, i, j);
        		cout << ans1 << "\n";
        	}
        	else {
        		ll ans1 = query(1, 1, n, i, n);
        		ll ans2 = query(1, 1, n, 1, j);
        		cout << min(ans1, ans2) << "\n";
        	}
        }
    }
    return 0;  
}

// https://www.geeksforgeeks.org/stringstream-c-applications/
