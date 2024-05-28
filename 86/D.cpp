//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e6 + 7;
int block, ans[N], a[N], cnt[N], sum;
struct Query{
    int index, L, R;
    bool operator < (const Query &other) const {
		int block_own = L / block;
		int block_other = other.L / block;
		if(block_own == block_other) {
           return R < other.R;
		}
		return block_own < block_other;
	}
}
query[N];
void add(int index){
    sum += cnt[a[index]] * 2 * a[index] + a[index];
    cnt[a[index]]++;
}
void remove(int index){
    sum -= cnt[a[index]] * 2 * a[index] - a[index];
    cnt[a[index]]--;
}
void solve() {
    int n; cin >> n;
    int q; cin >> q;
    block = sqrtl(n) + 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < q; i++){
        cin >> query[i].L >> query[i].R;
        query[i].L--; query[i].R--;
        query[i].index = i;
    }
    sort(query, query + q);
    int L = 0, R = -1;
	for (int i = 0; i < q; i++) {
	  while (R < query[i].R) add(++R);
	  while (L < query[i].L) remove(L++);
	  while (R > query[i].R) remove(R--);
	  while (L > query[i].L) add(--L);
	  ans[query[i].index] = sum;
	}
	for (int i = 0; i < q; i++) {
	  cout << ans[i] << "\n";
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}