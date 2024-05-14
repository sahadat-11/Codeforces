// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// const int N = 2e5 + 7;
// vector<int> pairs[N];
// vector<pair<int, int>> Q[N];
// int cnt[N], ans[N];
// void solve() {
//    int n, q; cin >> n >> q;
//    vector<int> pos(n + 1);
//    for(int i = 1; i <= n; i++) {
//      int x; cin >> x;
//      pos[x] = i;
//    }
//    for(int i = 1; i <= n; i++) {
//       for(int j = i; j <= n; j += i) {
//         int l = min(pos[i], pos[j]);
//         int r = max(pos[i], pos[j]);
//         pairs[r].push_back(l);
//       }
//    }
//    for(int i = 1; i <= q; i++) {
//      int l, r; cin >> l >> r;
//      Q[r].push_back({l, i});
//    }
//    for(int r = 1; r <= n; r++) {
//      for(auto l : pairs[r]) {
//        cnt[l]++;
//      }
//      for(auto [l, q_id] : Q[r]) {
//        int sum = 0;
//        for(int i = l; i <= r; i++) {
//         sum += cnt[i];
//        }
//        ans[q_id] = sum;
//      }
//    }
//    for(int i = 1; i <= q; i++) {
//     cout << ans[i] << "\n";
//    }
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }
// // O(N * N)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
//#define int long long
const int N = 2e5 + 9;
int t[4 * N];
int merge(int l, int r) { // change this
  return l + r;
}
void build(int n, int b, int e) {
  if(b == e) {
    t[n] = 0;
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
    t[n] += x;
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  update(l, b, mid, i, x);
  update(r, mid + 1, e, i, x);
  t[n] = merge(t[l], t[r]);
}
vector<int> pairs[N];
vector<pair<int, int>> Q[N];
int cnt[N], pos[N];
long long ans[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
   for(int i = 1; i <= n; i++) {
     int x; cin >> x;
     pos[x] = i;
   }
   for(int i = 1; i <= n; i++) {
      for(int j = i; j <= n; j += i) {
        int l = min(pos[i], pos[j]);
        int r = max(pos[i], pos[j]);
        pairs[r].push_back(l);
      }
   }
   for(int i = 1; i <= q; i++) {
     int l, r; cin >> l >> r;
     Q[r].push_back({l, i});
   }
   build(1, 1, n);
   for(int r = 1; r <= n; r++) {
     for(auto l : pairs[r]) {
       //cnt[l]++;
      update(1, 1, n, l, 1);
     }
     for(auto [l, q_id] : Q[r]) {
       // int sum = 0;
       // for(int i = l; i <= r; i++) {
       //  sum += cnt[i];
       // }
       int sum = query(1, 1, n, l, r);
       ans[q_id] = sum;
     }
   }
   for(int i = 1; i <= q; i++) {
    cout << ans[i] << "\n";
   }
  return 0;
}