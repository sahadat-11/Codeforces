//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int n; cin >> n; int a[n];
   	 for(int i = 0; i < n; i++) cin >> a[i];
   	 set<int> st;
   	 for(int i = 0; i < n; i++) {
   	 	if(st.find(a[i]) == st.end()) st.insert(a[i]);
   	 	else st.insert(a[i] + 1);
   	 }
   	 //for(auto u : st) cout << u <<" "; cout << "\n";
     cout << st.size() << "\n";
   }
   return 0;
}