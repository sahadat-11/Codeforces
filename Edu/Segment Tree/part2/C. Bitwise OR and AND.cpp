//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, B = 30;
struct node {
	int AND[B];
};
node t[N * 4];
int lazy[N * 4];
void push(int n, int b, int e) {
	if(lazy[n] == 0) return;
	for(int k = 0; k < B; k++) {
	  if((lazy[n] >> k) & 1) {
	  	t[n].AND[k] = 1;
	  }
	}
	if(b != e) {
		int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	    lazy[l] |= lazy[n];
	    lazy[r] |= lazy[n];
	}
	lazy[n] = 0; 
}
node merge(node l, node r) {
	node ans;
	for(int k = 0; k < B; k++) {
		ans.AND[k] = l.AND[k] & r.AND[k];
	}
	return ans;
}
void build(int n, int b, int e) {
	if(b == e) {
		memset(t[n].AND, 0, sizeof(t[n].AND));
		return;
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[n] = merge(t[l], t[r]);
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
    t[n] = merge(t[l], t[r]);
}
node query(int n, int b, int e, int i, int j) {
	push(n, b, e);
	if(e < i or j < b) {
		node one;
		fill(one.AND, one.AND + B, 1);// memset diya sudu 0 ans -1 hoi;
		return one;
	}
	if(b >= i and e <= j) {
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    //for(int i = 1; i <= n; i++) cin >> a[i];
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
    		node ans = query(1, 1, n, i, j);
    		binary to decimal
    		int val = 0;
    		for(int k = 0; k < 30; k++) {
    			if(ans.AND[k]) {
    				val += 1 << k;
    			}
    		}
    		cout << val << "\n";
    	}
    }
    return 0;  
}

// https://cplusplus.com/reference/algorithm/fill/
// Complexity: O(nlogn * 30) M = (N * 30)

//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, B = 30;
// struct node {
	// int AND[B];
// };
// node t[N * 4];
int t[N * 4];
int lazy[N * 4];
void push(int n, int b, int e) {
	if(lazy[n] == 0) return;
	for(int k = 0; k < B; k++) {
	  if((lazy[n] >> k) & 1) {
	  	//t[n].AND[k] = 1;
	  	t[n] |= (1 << k);
	  }
	}
	if(b != e) {
		int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	    lazy[l] |= lazy[n];
	    lazy[r] |= lazy[n];
	}
	lazy[n] = 0; 
}
// node merge(node l, node r) {
	// node ans;
	// for(int k = 0; k < B; k++) {
		// ans.AND[k] = l.AND[k] & r.AND[k];
	// }
	// return ans;
// }
int merge(int l, int r) {
	int ans = l & r;
	return ans;
}
void build(int n, int b, int e) {
	if(b == e) {
		//memset(t[n].AND, 0, sizeof(t[n].AND));
		t[n] = 0;
		return;
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[n] = merge(t[l], t[r]);
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
    t[n] = merge(t[l], t[r]);
}
int query(int n, int b, int e, int i, int j) {
	push(n, b, e);
	if(e < i or j < b) {
		// node one;
		// fill(one.AND, one.AND + B, 1);// memset diya sudu 0 ans -1 hoi;
		// return one;
		return (1 << B) - 1;
	}
	if(b >= i and e <= j) {
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    //for(int i = 1; i <= n; i++) cin >> a[i];
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
    		// node ans = query(1, 1, n, i, j);
    		// int val = 0;
    		// for(int k = 0; k < 30; k++) {
    			// if(ans.AND[k]) {
    				// val += 1 << k;
    			// }
    		// }
    		cout << query(1, 1, n, i, j) << "\n";
    	}
    }
    return 0;  
}

// https://cplusplus.com/reference/algorithm/fill/
// Complexity: O(nlogn * 30) M = (N) 


//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, B = 30;
// struct node {
	// int AND[B];
// };
// node t[N * 4];
int t[N * 4];
int lazy[N * 4];
void push(int n, int b, int e) {
	if(lazy[n] == 0) return;
	// for(int k = 0; k < B; k++) {
	  // if((lazy[n] >> k) & 1) {
	  	// //t[n].AND[k] = 1;
	  	// t[n] |= (1 << k);
	  // }
	// }
	t[n] |= lazy[n];
	if(b != e) {
		int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	    lazy[l] |= lazy[n];
	    lazy[r] |= lazy[n];
	}
	lazy[n] = 0; 
}
// node merge(node l, node r) {
	// node ans;
	// for(int k = 0; k < B; k++) {
		// ans.AND[k] = l.AND[k] & r.AND[k];
	// }
	// return ans;
// }
int merge(int l, int r) {
	int ans = l & r;
	return ans;
}
void build(int n, int b, int e) {
	if(b == e) {
		//memset(t[n].AND, 0, sizeof(t[n].AND));
		t[n] = 0;
		return;
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[n] = merge(t[l], t[r]);
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
    t[n] = merge(t[l], t[r]);
}
int query(int n, int b, int e, int i, int j) {
	push(n, b, e);
	if(e < i or j < b) {
		// node one;
		// fill(one.AND, one.AND + B, 1);// memset diya sudu 0 ans -1 hoi;
		// return one;
		return (1 << B) - 1;
	}
	if(b >= i and e <= j) {
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    //for(int i = 1; i <= n; i++) cin >> a[i];
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
    		// node ans = query(1, 1, n, i, j);
    		// int val = 0;
    		// for(int k = 0; k < 30; k++) {
    			// if(ans.AND[k]) {
    				// val += 1 << k;
    			// }
    		// }
    		cout << query(1, 1, n, i, j) << "\n";
    	}
    }
    return 0;  
}
// https://cplusplus.com/reference/algorithm/fill/
// Complexity: O(nlogn) M = (N)