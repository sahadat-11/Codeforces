// //In The Name of AintAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e5 + 7, B = 30;
// int a[N], ans[N], l[N], r[N], x[N];
// int main() {
// 	ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int n, q; cin >> n >> q;
//     for(int i = 1; i <= q; i++) {
//     	cin >> l[i] >> r[i] >> x[i];
//     }
//     for(int k = 0; k < B; k++) {
//     	for(int i = 1; i <= n; i++) {
//     		a[i] = 0;
//     	}

//     	for(int i = 1; i <= q; i++) {
//     		if((x[i] >> k) & 1) {// if(k th bit is one)
//                for(int j = l[i]; j <= r[i]; j++) {
//     			 a[j] = 1;
//     		   }
//     		}
//     	}
//     	for(int i = 1; i <= q; i++) {
//     		if(!((x[i] >> k) & 1)) {// if(k th bit is zero)
//     		   int cur = 1;
//                for(int j = l[i]; j <= r[i]; j++) {
//     			 cur &= a[j];
//     		   }
//     		   if(cur != 0) {
//     		   	  cout << "NO\n";
//     		   	  return 0;
//     		   }
//     		}
//     	}
//     	for(int i = 1; i <= n; i++) {
//     		if(a[i]) {// if(a[i] means )
//                ans[i] |= 1 << k;//ans[i] er k tomo bit ta 1 kora
//     		}
//     	}
//     }
//     cout << "YES\n";
//     for(int i = 1; i <= n; i++) {
//     	cout << ans[i] << " ";
//     }
//     return 0;
// }

//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, B = 30;
int a[N], ans[N], l[N], r[N], x[N];
bool t[N * 4], lazy[N * 4];
/*
segment tree (on a 0/1 array)
assign 1 to certain range
find bitwise AND of a certain range
*/
void push(int n, int b, int e) {
    if(lazy[n] == false) return;
    t[n] = 1; 
    if(b != e) {
        int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
        lazy[l] = lazy[n];
        lazy[r] = lazy[n];
    }
    lazy[n] = false; 
}
void build(int n, int b, int e) {
    lazy[n] = false;
    if(b == e) {
        t[n] = a[b];
        return;
    }
    int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = (t[l] & t[r]);
}
void update(int n, int b, int e, int i, int j) {
    push(n, b, e);
    if(e < i or b > j) return;
    if(b >= i and j >= e) {
        lazy[n] = true;
        push(n, b, e);
        return;
    }
    int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
    update(l, b, mid, i, j);
    update(r, mid + 1, e, i, j);
    t[n] = t[l] & t[r];
}
bool query(int n, int b, int e, int i, int j) {
    push(n, b, e);
    if(e < i or j < b) return 1;
    if(b >= i and e <= j) {
        return t[n];
    }
    int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
    return query(l, b, mid, i, j) & query(r, mid + 1, e, i, j);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    for(int i = 1; i <= q; i++) {
        cin >> l[i] >> r[i] >> x[i];
    }
    for(int k = 0; k < B; k++) {
        // for(int i = 1; i <= n; i++) {
        //     a[i] = 0;
        // }
        build(1, 1, n);

        for(int i = 1; i <= q; i++) {
            if((x[i] >> k) & 1) {// if(k th bit is one)
               // for(int j = l[i]; j <= r[i]; j++) {
               //   a[j] = 1;
               // }
                update(1, 1, n, l[i], r[i]);
            }
        }
        for(int i = 1; i <= q; i++) {
            if(!((x[i] >> k) & 1)) {// if(k th bit is zero)
               // int cur = 1;
               // for(int j = l[i]; j <= r[i]; j++) {
               //   cur &= a[j];
               // }
                int cur = query(1, 1, n, l[i], r[i]);
                if(cur != 0) {
                  cout << "NO\n";
                  return 0;
               }
            }
        }
        for(int i = 1; i <= n; i++) {
            // if(a[i]) {// if(a[i] means )
            //    ans[i] |= 1 << k;//ans[i] er k tomo bit ta 1 kora
            // }
            if(query(1, 1, n, l[i], r[i])) {
                ans[i] |= 1 << k;
            }
        }
    }
    cout << "YES\n";
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}