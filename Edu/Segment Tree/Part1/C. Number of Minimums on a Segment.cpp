//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, inf = 1e9 + 7;
int a[N];
struct node {
	int mn, count;
};
node t[4 * N];
node merge(node l, node r) {
	node ans;
	ans.mn = min(l.mn, r.mn);
	ans.count = 0;
    if (l.mn == ans.mn) { // key jar theke nibo count o tar theke nibo;
      ans.count += l.count;
    }
    if (r.mn == ans.mn) {
      ans.count += r.count;
    }
    return ans;
}
void build(int n, int b, int e) {
	if(b == e) {
		t[n].mn = a[b];
		t[n].count = 1;
		return;
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[n] = merge(t[l], t[r]);
}
void update(int n, int b, int e, int i, int x) {
	if(e < i or i < b) return;
	if(b >= i and i >= e) {
		t[n].mn = x;
		t[n].count = 1;
		return;
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	update(l, b, mid, i, x);
	update(r, mid + 1, e, i, x);
	t[n] = merge(t[l], t[r]);
}
node query(int n, int b, int e, int i, int j) {
	if(e < i or j < b) return {inf, 1};
	if(b >= i and j >= e) {
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
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
    		node ans = query(1, 1, n, i, j);
    	   cout << ans.mn << " " << ans.count << "\n";
    	}
    }
    return 0;  
}
//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, inf = 1e9 + 7;
int a[N];
pair<int,int> t[4 * N];
pair<int, int> merge(pair<int,int> l, pair<int, int> r) {
   pair<int, int> ans;
   ans.first = min(l.first, r.first);
   ans.second = 0; // key jar theke nibo count o tar theke nibo;
   if(ans.first == l.first) ans.second += l.second;
   if(ans.first == r.first) ans.second += r.second;  
   return ans;
}
void build(int n, int b, int e) {
	if(b == e) {
		t[n].first = a[b];
		t[n].second = 1;
		return;
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[n] = merge(t[l], t[r]);
}
void update(int n, int b, int e, int i, int x) {
	if(e < i or i < b) return;
	if(b >= i and i >= e) {
		t[n].first = x;
		t[n].second = 1;
		return;
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	update(l, b, mid, i, x);
	update(r, mid + 1, e, i, x);
	t[n] = merge(t[l], t[r]);
}
pair<int, int> query(int n, int b, int e, int i, int j) {
	if(e < i or j < b) return {inf, 1};
	if(b >= i and j >= e) {
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
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
    		pair<int,int> ans = query(1, 1, n, i, j);
    	    cout << ans.first << " " << ans.second << "\n";
    	}
    }
    return 0;  
}