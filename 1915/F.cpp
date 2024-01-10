// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using namespace std;
// #define ll long long
// template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// int main() {
// 	int t; cin >> t;
// 	while(t--) {
// 		int n; cin >> n;
// 		vector<pair<int, int>> v;
// 		for(int i = 0; i < n; i++) {
// 			int a, b; cin >> a >> b;
// 			v.push_back({a, b});
// 		}
// 		sort(v.begin(), v.end());
// 		ll ans = 0;
// 		o_set<int > st;
// 		for(int i = 0; i < n; i++) {
// 			ans += st.order_of_key(-v[i].second);
// 			st.insert(-v[i].second);
// 		}
// 		cout << ans << "\n";
// 	} 
// }

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<pair<int, int>> v;
		for(int i = 0; i < n; i++) {
			int a, b; cin >> a >> b;
			v.push_back({a, b});
		}
		sort(v.begin(), v.end());
		ll ans = 0;
		o_set<int > st;
		for(int i = n - 1; i >= 0; i--) {
			ans += st.order_of_key(v[i].second);
			st.insert(v[i].second);
			//cout << ans << endl; 
		}
		cout << ans << "\n";
	} 
}

// https://prnt.sc/JlSnqfuXzNsC
// https://prnt.sc/yvk1EmYvAPwh
// https://prnt.sc/KE-2oTMZa95t