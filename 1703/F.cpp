// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n;
//    vector<int> a(n + 1);
//    for(int i = 1; i <= n; i++) {
//      cin >> a[i];
//    }
//    int cnt = 0;
//    for(int i = 1; i <= n; i++) {
//    	for(int j = i + 1; j <= n; j++) {
//    	  if(a[i] < i and i < a[j] and a[j] < j) {
//    	  	cnt++;
//    	  }
//    	}
//    }
//    cout << cnt << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   int cnt = 0;
   o_set<int> st;
   for(int i = 1; i <= n; i++) {
   	int x = i - a[i];
   	if(x > 0) {
   	  int y = st.order_of_key(a[i]);
   	  cnt += y;
      st.insert(i);
   	}
   }
   //for(auto u : ans) cout << u << " ";
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, x, t;

void solve(){
	cin>>n;
	
	vector<int> v;
	ll ans=0;
	for(ll i=0; i<n; i++){
		cin>>x;
		if(x>=i+1) continue;
		ans+=(ll)(lower_bound(v.begin(), v.end(), x)-v.begin());
		v.push_back(i+1);
	}
	cout<<ans<<endl;

}

signed main(){
	cin>>t;
	while(t--) solve();
}