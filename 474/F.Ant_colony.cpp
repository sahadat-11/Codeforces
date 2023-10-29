//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
int a[N];
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    //build(1, 1, n);
    int q; cin >> q;
    while(q--) {
    	int i, j; cin >> i >> j;
    	int g = 0, mn_element = 1e9 + 7, mn_cnt = 0;
    	for(int k = i; k <= j; k++) {
    		g = __gcd(g, a[k]);
    		// if(mn_element > a[i]) {
    		// 	mn_element = a[i];
    		// }
    		mn_element = min(mn_element, a[k]);
    	}
    	for(int k = i; k <= j; k++) {
    		if(a[k] == g) {
    			mn_cnt++;
    		}
    	}
    	cout << (j - i + 1) - mn_cnt << endl;
    }
    return 0;  
}
//O(n * n);

//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, inf = 1e9 + 7;
int a[N];
struct node {
	int mn_element, mn_cnt, g;
};
node t[4 * N];
node merge(node l, node r) {
	node ans;
	ans.mn_element = min(l.mn_element, r.mn_element);
	ans.mn_cnt = 0;// 0 assign korte hobe na hole jodi condition fill up na hoi garvage value return korbe
	if(ans.mn_element == l.mn_element) {
		ans.mn_cnt += l.mn_cnt;
	}
	if(ans.mn_element == r.mn_element) {
		ans.mn_cnt += r.mn_cnt;
	}
	ans.g = __gcd(l.g, r.g);
	return ans;
} 
void build(int n, int b, int e) {
	if(b == e) {
		t[n].mn_element = a[b];
		t[n].mn_cnt = 1;
		t[n].g = a[b];
		return;
	}
	int l = 2 * n, r = 2 * n + 1;
	int mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[n] = merge(t[l], t[r]);
}
node query(int n, int b, int e, int i, int j) {
	if(e < i or j < b) return {inf, 0, 0};
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
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    int q; cin >> q;
    while(q--) {
    	int i, j; cin >> i >> j;
    	node ans = query(1, 1, n, i, j);
    	int cnt = 0;
    	if(ans.g == ans.mn_element) {
    		cnt = ans.mn_cnt;
    	}
    	cout << (j - i + 1) - cnt << "\n";
    }
    return 0;  
}
// O(q * log n * logn); // for merge function gcd(logn);

