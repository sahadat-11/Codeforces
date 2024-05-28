//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   set<int> st;
   while(t--) {
      int x; cin >> x;
      st.insert(x);
   }
   if(st.size() <= 1) cout << "NO\n";
   else {
      auto it = st.begin();
      it++;
      cout << *it << endl;
   }
   return 0;
}

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int l[N], r[N];
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  o_set<int> st;
  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    st.insert(x);
  }
  if(st.size() <= 1) cout << "NO\n";
  else cout << *st.find_by_order(1) << "\n";
  return 0;
}
//https://www.geeksforgeeks.org/ordered-set-gnu-c-pbds/