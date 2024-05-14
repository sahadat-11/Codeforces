// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n; cin >> n; int a[n];
//    for(int i = 0; i < n; i++) {
//    	 cin >> a[i];
//    }
//    sort(a, a + n);
//    bool flag = true;
//    if(a[n - 1] >= (a[n - 2] + a[n - 3])) flag = false;
   
//    if(!flag) {
//    	 cout << "NO\n";
//    }
//    else {
//    	 cout << "YES\n";
//    	 cout << a[n - 1] << " ";
//    	 for(int i = n - 3; i >= 0; i--) cout << a[i] << " ";
//    	 cout << a[n - 2];
//    }
//    return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   if(v[n - 1] >= v[n - 2] + v[n - 3]) {
      cout << "NO\n";
   }
   else {
      swap(v[n - 1], v[n - 2]);
      cout << "YES\n";
      for(auto u : v) cout << u << " ";
   }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/1QUSVddZevRB
// https://prnt.sc/iVQ5vlBIw-WC